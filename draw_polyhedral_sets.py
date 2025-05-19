# import numpy as np
# import casadi
# import matplotlib.pyplot as plt
# from matplotlib.patches import Polygon, Circle

# def LinMatrix(eta, Delta, l):
#     s1 = np.sin(eta[0]+eta[1])
#     c1 = np.cos(eta[0]+eta[1])
#     return np.array([[casadi.cos(eta[0])-casadi.tan(eta[1])*(casadi.sin(eta[0])+Delta*s1/l), -Delta*s1],
#                      [casadi.sin(eta[0])+casadi.tan(eta[1])*(casadi.cos(eta[0])+Delta*c1/l),  Delta*c1]])


# # Define time-varying η (simulate a time instance)
# eta = np.array([0.1, 0.1])  # for example

# # Define M(η) — assume a 2x2 invertible matrix for feedback linearization
# M = LinMatrix(eta, 0.35, 0.256)

# # T is a fixed box constraint matrix (map real input to constraints)
# T = np.array([[-1, 0], [0, -1], [1, 0], [0, 1]])
# h = np.array([-1.0, -1.0, 1.0, 1.0])  # box [-1, 1] in each dimension

# # Compute L(η)
# # Minv = np.linalg.inv(M(eta))
# Minv = M**(-1)
# L = T @ Minv

# Delta = 0.35
# l = 0.256
# eta = np.array([0.1, 0.1])  # Example state

# # Evaluate matrix numerically
# eta_sym = casadi.MX.sym("eta", 2)
# M_expr = LinMatrix(eta_sym, Delta, l)
# M_func = casadi.Function("M_func", [eta_sym], [M_expr])
# M_val = np.array(M_func(eta)[0])

# # Compute inverse of M
# Minv = np.linalg.inv(M_val)

# # Real input constraints (box: [-1, 1] x [-1, 1])
# u_box = np.array([
#     [-1, -1],
#     [-1,  1],
#     [ 1,  1],
#     [ 1, -1]
# ])

# # Map to parallelogram in virtual input space
# w_poly = (Minv @ u_box.T).T
# w_poly = np.vstack([w_poly, w_poly[0]])  # close polygon

# # Plot
# plt.figure(figsize=(6, 6))

# # Plot parallelogram (U)
# plt.plot(w_poly[:, 0], w_poly[:, 1], 'b-', label='Polyhedral set U (parallelogram)')
# plt.fill(w_poly[:, 0], w_poly[:, 1], color='blue', alpha=0.3)

# # Plot inner circle (U')
# r_hat = 0.4  # Choose radius so it fits in the parallelogram (adjust as needed)
# circle = Circle((0, 0), r_hat, color='red', alpha=0.4, label='Inner circle U\'')
# plt.gca().add_patch(circle)

# # Axes and formatting
# plt.axhline(0, color='gray', linestyle='--')
# plt.axvline(0, color='gray', linestyle='--')
# plt.xlabel('w1')
# plt.ylabel('w2')
# plt.title("Parallelogram Constraint Set U and Inner Circle U'")
# plt.legend()
# plt.grid(True)
# plt.axis('equal')
# plt.show()


# import numpy as np
# import matplotlib.pyplot as plt
# from matplotlib.patches import Circle
# import casadi

# # Define LinMatrix from feedback linearization
# def LinMatrix(eta, Delta, l):
#     s1 = casadi.sin(eta[0] + eta[1])
#     c1 = casadi.cos(eta[0] + eta[1])
#     return casadi.vertcat(
#         casadi.horzcat(
#             casadi.cos(eta[0]) - casadi.tan(eta[1]) * (casadi.sin(eta[0]) + Delta * s1 / l),
#             -Delta * s1
#         ),
#         casadi.horzcat(
#             casadi.sin(eta[0]) + casadi.tan(eta[1]) * (casadi.cos(eta[0]) + Delta * c1 / l),
#             Delta * c1
#         )
#     )

# # Parameters
# Delta = 0.35
# l = 0.256
# eta = np.array([0.1, 0.1])  # Example state

# # Evaluate matrix numerically
# eta_sym = casadi.MX.sym("eta", 2)
# M_expr = LinMatrix(eta_sym, Delta, l)
# M_func = casadi.Function("M_func", [eta_sym], [M_expr])
# M_val = M_func(eta).full()

# # Compute inverse of M
# Minv = np.linalg.inv(M_val)

# # Real input constraints (box: [-1, 1] x [-1, 1])
# u_box = np.array([
#     [-1, -1],
#     [-1,  1],
#     [ 1,  1],
#     [ 1, -1]
# ])

# # Map to parallelogram in virtual input space
# w_poly = (Minv @ u_box.T).T
# w_poly = np.vstack([w_poly, w_poly[0]])  # close polygon

# # Plot
# plt.figure(figsize=(6, 6))

# # Plot parallelogram (U)
# plt.plot(w_poly[:, 0], w_poly[:, 1], 'b-', label='Polyhedral set U (parallelogram)')
# plt.fill(w_poly[:, 0], w_poly[:, 1], color='blue', alpha=0.3)

# # Plot inner circle (U')
# r_hat = 0.4  # Choose radius so it fits in the parallelogram (adjust as needed)
# circle = Circle((0, 0), r_hat, color='red', alpha=0.4, label='Inner circle U\'')
# plt.gca().add_patch(circle)

# # Axes and formatting
# plt.axhline(0, color='gray', linestyle='--')
# plt.axvline(0, color='gray', linestyle='--')
# plt.xlabel('w1')
# plt.ylabel('w2')
# plt.title("Parallelogram Constraint Set U and Inner Circle U'")
# plt.legend()
# plt.grid(True)
# plt.axis('equal')
# plt.show()



import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Circle
import casadi

# --- Define LinMatrix ---
def LinMatrix(eta, Delta, l):
    s1 = casadi.sin(eta[0] + eta[1])
    c1 = casadi.cos(eta[0] + eta[1])
    return casadi.vertcat(
        casadi.horzcat(
            casadi.cos(eta[0]) - casadi.tan(eta[1]) * (casadi.sin(eta[0]) + Delta * s1 / l),
            -Delta * s1
        ),
        casadi.horzcat(
            casadi.sin(eta[0]) + casadi.tan(eta[1]) * (casadi.cos(eta[0]) + Delta * c1 / l),
            Delta * c1
        )
    )

# --- Constants ---
Delta = 0.35
l = 0.256

# --- Symbolic CasADi Function ---
eta_sym = casadi.MX.sym("eta", 2)
M_expr = LinMatrix(eta_sym, Delta, l)
M_func = casadi.Function("M_func", [eta_sym], [M_expr])

# --- Input constraint box (real input space) ---
u_box = np.array([
    [-1, -1],
    [-1,  1],
    [ 1,  1],
    [ 1, -1]
])

# --- Generate time-varying eta(t) values ---
n_sets = 6
etas = [np.array([0.1 + 0.2*t, 0.1*np.sin(t)]) for t in np.linspace(0, 2*np.pi, n_sets)]

# --- Plot setup ---
plt.figure(figsize=(8, 8))
colors = plt.cm.viridis(np.linspace(0, 1, n_sets))

for i, eta in enumerate(etas):
    # Compute M and its inverse
    M_val = M_func(eta).full()
    Minv = np.linalg.inv(M_val)

    # Transform u-box to w-space
    w_poly = (Minv @ u_box.T).T
    w_poly = np.vstack([w_poly, w_poly[0]])  # close polygon

    # Plot parallelogram
    plt.plot(w_poly[:, 0], w_poly[:, 1], color=colors[i], label=f'U(η) at t{i}')
    plt.fill(w_poly[:, 0], w_poly[:, 1], color=colors[i], alpha=0.2)

# --- Plot fixed inner circle U' ---
r_hat = 0.4
circle = Circle((0, 0), r_hat, color='red', alpha=0.3, label='Inner Circle U\'')
plt.gca().add_patch(circle)

# --- Final plot settings ---
plt.axhline(0, color='gray', linestyle='--')
plt.axvline(0, color='gray', linestyle='--')
plt.xlabel('w1')
plt.ylabel('w2')
plt.grid(True)
plt.axis('equal')
plt.legend(loc='upper right', fontsize='small')
plt.title("Multiple Polyhedral Sets U(η) and Inner Circle U'")
plt.show()