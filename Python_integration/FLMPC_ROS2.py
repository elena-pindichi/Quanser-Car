import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.qos import QoSProfile, HistoryPolicy, ReliabilityPolicy
import numpy as np
import casadi
from motion_capture_tracking_interfaces.msg import NamedPoseArray
from qcar2_interfaces.msg import MotorCommands
from tf_transformations import euler_from_quaternion


class MPCControllerNode(Node):
    def __init__(self):
        super().__init__('mpc_virtual_node')

        qos_profile = QoSProfile(
            history=HistoryPolicy.KEEP_LAST,
            depth=1,
            reliability=ReliabilityPolicy.BEST_EFFORT
        )
        self.callback_group = ReentrantCallbackGroup()

        self.pose_subscriber = self.create_subscription(
            NamedPoseArray,
            '/poses',
            self.poses_callback,
            qos_profile,
            callback_group=self.callback_group
        )

        self.cmd_publisher = self.create_publisher(
            MotorCommands,
            '/qcar2_motor_speed_cmd',
            10
        )

        self.target_name = 'qcar2'
        self.phi = 0.0
        self.last_time = None
        self.idx = 0
        self.dt = 0.1

        self.DX = 4
        self.DZ = 2
        self.DU = 2
        self.NPRED = 10
        self.L = 0.256
        self.DELTA = 0.35

        self.curr_state = np.zeros((self.DX, 1))
        self.saved_states = []

        self.setup_mpc()
        self.create_reference_trajectory()

        self.timer = self.create_timer(self.dt, self.timer_callback)

    def LinOutput(self, x):
        return np.array([
            x[0] + self.L * np.cos(x[2]) + self.DELTA * np.cos(x[2] + x[3]),
            x[1] + self.L * np.sin(x[2]) + self.DELTA * np.sin(x[2] + x[3])
        ])

    def LinMatrix(self, eta):
        theta, phi = eta
        s1 = np.sin(theta + phi)
        c1 = np.cos(theta + phi)
        return np.array([
            [np.cos(theta) - np.tan(phi)*(np.sin(theta) + self.DELTA * s1 / self.L), -self.DELTA * s1],
            [np.sin(theta) + np.tan(phi)*(np.cos(theta) + self.DELTA * c1 / self.L),  self.DELTA * c1]
        ])

    def setup_mpc(self):
        Q = 20 * np.eye(self.DZ)
        R = 1 * np.eye(self.DU)
        P = 100 * Q

        self.solver = casadi.Opti()
        self.Z = self.solver.variable(self.DZ, self.NPRED)
        self.W = self.solver.variable(self.DU, self.NPRED)

        self.ZINIT = self.solver.parameter(self.DZ, 1)
        self.ZREF = self.solver.parameter(self.DZ, self.NPRED)
        self.WREF = self.solver.parameter(self.DU, self.NPRED)

        self.solver.subject_to(self.Z[:, 0] == self.ZINIT)

        A = np.eye(self.DZ)
        B = self.dt * np.eye(self.DZ)

        rhat = min(self.DELTA * self.L * 10 / np.sqrt(self.DELTA**2 + self.L**2), 1)

        for k in range(self.NPRED - 1):
            self.solver.subject_to(self.Z[:, k+1] == A @ self.Z[:, k] + B @ self.W[:, k])
            self.solver.subject_to(casadi.mtimes(self.W[:, k].T, self.W[:, k]) <= rhat)

        obj = 0
        for k in range(self.NPRED - 1):
            obj += casadi.mtimes([(self.Z[:, k] - self.ZREF[:, k]).T, Q, (self.Z[:, k] - self.ZREF[:, k])])
            obj += casadi.mtimes([(self.W[:, k] - self.WREF[:, k]).T, R, (self.W[:, k] - self.WREF[:, k])])
        obj += casadi.mtimes([(self.Z[:, -1] - self.ZREF[:, -1]).T, P, (self.Z[:, -1] - self.ZREF[:, -1])])
        self.solver.minimize(obj)
        self.solver.solver('ipopt', {'ipopt.print_level': 0, 'print_time': 0})

    def create_reference_trajectory(self):
        t = np.arange(0, 10, self.dt)
        alpha = 0.15
        beta = 0.15

        xr = alpha * t
        yr = beta * t
        dxr = np.full_like(t, alpha)
        dyr = np.full_like(t, beta)
        ddxr = np.zeros_like(t)
        ddyr = np.zeros_like(t)
        dddxr = np.zeros_like(t)
        dddyr = np.zeros_like(t)

        Vr = np.sqrt(dxr**2 + dyr**2)
        epsilon = 1e-6
        Vr_safe = np.maximum(Vr, epsilon)

        numerator = (dddyr * dxr - dddxr * dyr) * (Vr_safe ** 2) - 3 * (ddyr * dxr - ddxr * dyr) * (dxr * ddxr + dyr * ddyr)
        denominator = (Vr_safe ** 6 + self.L ** 2 * (ddyr * dxr - ddxr * dyr) ** 2)
        omegar = self.L * Vr_safe * numerator / denominator

        thetar = np.unwrap(np.arctan2(dyr / Vr_safe, dxr / Vr_safe))
        phir = np.arctan((self.L * (ddyr * dxr - ddxr * dyr)) / (Vr_safe ** 3))

        self.ZREF_FULL = np.array([
            xr + self.L * np.cos(thetar) + self.DELTA * np.cos(thetar + phir),
            yr + self.L * np.sin(thetar) + self.DELTA * np.sin(thetar + phir)
        ])

        self.WREF_FULL = np.zeros((2, len(t)))
        for i in range(len(t)):
            M = self.LinMatrix([thetar[i], phir[i]])
            self.WREF_FULL[:, i] = M @ np.array([Vr[i], omegar[i]])

    def timer_callback(self):
        self.saved_states.append(self.curr_state.copy())

        if self.idx > len(self.ZREF_FULL[0]) - self.NPRED:
            self.get_logger().info("Trajectory complete.")
            return

        try:
            z_current = self.LinOutput(self.curr_state[:, 0])
            self.solver.set_value(self.ZINIT, z_current)

            zref = self.ZREF_FULL[:, self.idx:self.idx + self.NPRED]
            wref = self.WREF_FULL[:, self.idx:self.idx + self.NPRED]

            self.solver.set_value(self.ZREF, zref)
            self.solver.set_value(self.WREF, wref)

            sol = self.solver.solve()
            w0 = sol.value(self.W[:, 0])

            eta = self.curr_state[2:4, 0]
            M = self.LinMatrix(eta)
            u0 = np.linalg.pinv(M) @ w0

            self.phi = self.integrate_phi(self.phi, u0[1], self.dt)

            msg = MotorCommands()
            msg.motor_names = ['steering_angle', 'motor_throttle']
            msg.values = [self.phi, u0[0]]
            self.cmd_publisher.publish(msg)

            x_next = self.curr_state[:, 0] + self.dt * self.fdynamics(self.curr_state[:, 0], u0)
            self.curr_state = x_next.reshape(-1, 1)

            self.idx += 1
        except Exception as e:
            self.get_logger().error(f"MPC solve error: {e}")

    def fdynamics(self, x, u):
        return np.array([
            u[0] * np.cos(x[2]),
            u[0] * np.sin(x[2]),
            u[0] * np.tan(x[3]) / self.L,
            u[1]
        ])

    def integrate_phi(self, phi_current, omega, dt):
        return np.clip(phi_current + omega * dt, -np.pi / 2, np.pi / 2)

    def poses_callback(self, msg):
        now = self.get_clock().now()

        if self.last_time is None:
            self.last_time = now
            return

        dt = (now - self.last_time).nanoseconds * 1e-9
        self.last_time = now

        for named_pose in msg.poses:
            if named_pose.name == self.target_name:
                x = named_pose.pose.position.x
                y = named_pose.pose.position.y
                q = named_pose.pose.orientation
                _, _, yaw = euler_from_quaternion([q.x, q.y, q.z, q.w])
                yaw = np.unwrap(yaw)

                self.curr_state = np.array([[x], [y], [yaw], [self.phi]])


def main(args=None):
    rclpy.init(args=args)
    node = MPCControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
