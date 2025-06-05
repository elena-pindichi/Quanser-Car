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
        super().__init__('mpc_controller_node')

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

        self.timer = self.create_timer(0.1, self.timer_callback)
        self.saved_states = []

        self.target_name = 'qcar2'
        self.phi = 0.0  # initial steering angle
        self.last_time = None
        self.idx = 0
        self.curr_state = np.zeros((4, 1))
        self.dt = 0.1
        self.setup_mpc()

    def timer_callback(self):
        self.saved_states.append(self.curr_state.copy())
        if self.idx > 10 / self.dt:
            msg_out = MotorCommands()
            msg_out.motor_names = ['steering_angle', 'motor_throttle']
            msg_out.values = [0.0, 0.0]
            self.cmd_publisher.publish(msg_out)
            self.get_logger().info(f"I stopped")
            self.plot_reference_and_states()
            return

        if self.idx + self.NPRED > 10 / self.dt:
            try:
                remaining = self.XREF_FULL[:, self.idx:]
                pad_count = self.NPRED - remaining.shape[1]
                last_col = self.XREF_FULL[:, -1][:, np.newaxis]
                padding = np.repeat(last_col, pad_count, axis=1)
                padded_ref = np.hstack([remaining, padding])

                remaining_u = self.UREF_FULL[:, self.idx:]
                pad_count_u = self.NPRED - remaining_u.shape[1]
                last_col_u = self.UREF_FULL[:, -1][:, np.newaxis]
                padding_u = np.repeat(last_col_u, pad_count_u, axis=1)
                padded_uref = np.hstack([remaining_u, padding_u])

                self.solver.set_value(self.XINIT, self.curr_state)
                self.solver.set_value(self.XREF, padded_ref)
                self.solver.set_value(self.UREF, padded_uref)

                self.get_logger().info(f"I am in the last part of the reference ")
                sol = self.solver.solve()
                u0 = sol.value(self.U[:, 0])

                self.phi = self.integrate_phi(self.phi, u0[1], self.dt)

                msg_out = MotorCommands()
                msg_out.motor_names = ['steering_angle', 'motor_throttle']
                msg_out.values = [self.phi, u0[0]]
                self.cmd_publisher.publish(msg_out)

                self.get_logger().info(f"MPC: v={u0[0]:.2f}, phi={self.phi:.2f}")
            except Exception as e:
                self.get_logger().error(f"MPC failed: {str(e)}")
        else:
            try:
                self.solver.set_value(self.XINIT, self.curr_state)
                self.solver.set_value(self.XREF, self.XREF_FULL[:, self.idx:(self.idx + self.NPRED)])
                self.solver.set_value(self.UREF, self.UREF_FULL[:, self.idx:(self.idx + self.NPRED)])

                sol = self.solver.solve()
                u0 = sol.value(self.U[:, 0])

                self.phi = self.integrate_phi(self.phi, u0[1], self.dt)

                msg_out = MotorCommands()
                msg_out.motor_names = ['steering_angle', 'motor_throttle']
                msg_out.values = [self.phi, u0[0]]
                self.cmd_publisher.publish(msg_out)

                self.get_logger().info(f"MPC: v={u0[0]:.2f}, phi={self.phi:.2f}")
            except Exception as e:
                self.get_logger().error(f"MPC failed: {str(e)}")
        self.idx += 1

    def setup_mpc(self):
        self.NPRED = 12
        self.L = 0.256  
        self.TS = 0.1

        DX, DU = 4, 2
        self.solver = casadi.Opti()

        self.X = self.solver.variable(DX, self.NPRED)
        self.U = self.solver.variable(DU, self.NPRED)

        self.XINIT = self.solver.parameter(DX, 1)
        self.XREF = self.solver.parameter(DX, self.NPRED)
        self.UREF = self.solver.parameter(DU, self.NPRED)

        self.solver.subject_to(self.X[:, 0] == self.XINIT)

        PHIMAX = np.pi / 5
        VMAX = 0.6
        WMAX = 1.0

        def fdynamics(x, u):
            return casadi.vertcat(
                u[0] * casadi.cos(x[2]),
                u[0] * casadi.sin(x[2]),
                u[0] * casadi.tan(x[3]) / self.L,
                u[1]
            )

        for k in range(self.NPRED - 1):
            self.solver.subject_to(self.X[:, k + 1] == self.X[:, k] + self.TS * fdynamics(self.X[:, k], self.U[:, k]))
            self.solver.subject_to(self.X[3, k + 1] >= -PHIMAX)
            self.solver.subject_to(self.X[3, k + 1] <= PHIMAX)
            self.solver.subject_to(self.U[0, k] >= -VMAX)
            self.solver.subject_to(self.U[0, k] <= VMAX)
            self.solver.subject_to(self.U[1, k] >= -WMAX)
            self.solver.subject_to(self.U[1, k] <= WMAX)

        Q = 10 * np.eye(DX)
        R = 1 * np.eye(DU)
        P = 10 * Q

        obj = 0
        for k in range(self.NPRED - 1):
            obj += casadi.mtimes([(self.X[:, k] - self.XREF[:, k]).T, Q, (self.X[:, k] - self.XREF[:, k])])
            obj += casadi.mtimes([(self.U[:, k] - self.UREF[:, k]).T, R, (self.U[:, k] - self.UREF[:, k])])
        obj += casadi.mtimes([(self.X[:, -1] - self.XREF[:, -1]).T, P, (self.X[:, -1] - self.XREF[:, -1])])
        self.solver.minimize(obj)

        self.solver.solver('ipopt', {'ipopt.print_level': 0, 'print_time': 0})

        # Call the separated function to create reference trajectory
        self.create_reference_trajectory()

    def create_reference_trajectory(self):
        t = np.arange(0, 10, self.TS)
        alpha = 0.15
        beta = 0.15
        l = self.L

        # Positions
        xr = alpha * t
        yr = beta * t

        # First derivatives (velocities)
        dxr = alpha + 0 * t
        dyr = beta + 0 * t

        # Second derivatives (accelerations)
        ddxr = 0 + 0 * t
        ddyr = 0 + 0 * t

        # Third derivatives (jerks)
        dddxr = 0 + 0 * t
        dddyr = 0 + 0 * t

        # Compute velocity magnitude Vr
        Vr = np.sqrt(dxr ** 2 + dyr ** 2)

        # Avoid division by zero by adding a small epsilon
        epsilon = 1e-8
        Vr_safe = np.maximum(Vr, epsilon)

        # Compute omegar as per MATLAB formula
        numerator = (dddyr * dxr - dddxr * dyr) * (Vr_safe ** 2) - 3 * (ddyr * dxr - ddxr * dyr) * (dxr * ddxr + dyr * ddyr)
        denominator = (Vr_safe ** 6 + (l ** 2) * (ddyr * dxr - ddxr * dyr) ** 2)
        omegar = l * Vr_safe * numerator / denominator

        # Compute thetar (angle reference)
        thetar = np.unwrap(np.arctan2(dyr / Vr_safe, dxr / Vr_safe))

        # Compute phir (steering angle reference)
        phir = np.arctan((l * (ddyr * dxr - ddxr * dyr)) / (Vr_safe ** 3))

        # Stack references
        self.XREF_FULL = np.vstack([xr, yr, thetar, phir])
        self.UREF_FULL = np.vstack([Vr, omegar])

    def integrate_phi(self, phi_current, omega, dt):
        PHI_MAX = np.pi / 2
        return np.clip(phi_current + omega * dt, -PHI_MAX, PHI_MAX)

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

                current_state = np.array([x, y, yaw, self.phi])
                self.curr_state = current_state
                # self.get_logger().info(
                #     f"current_state: (x,y)=({current_state[0]:.2f}, {current_state[1]:.2f}), theta={current_state[2]:.2f}"
                # )
                
    def plot_reference_and_states(self):
        import matplotlib.pyplot as plt
        states = np.array(self.saved_states)
        t_len = states.shape[0]
        ref = self.XREF_FULL[:, :t_len]

        plt.figure()
        plt.plot(states[:, 0], states[:, 1], label='Tracked Position')
        plt.plot(ref[0, :], ref[1, :], '--', label='Reference Position')
        plt.xlabel('x')
        plt.ylabel('y')
        plt.legend()
        plt.grid(True)
        plt.title("Reference vs States")
        plt.show()

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