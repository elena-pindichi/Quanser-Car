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
n_sets = 5  # number of rotated parallelograms

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

# --- Fixed η value ---
t = 1.0
eta_val = np.array([0.9 + 0.5 * t, 0.3 * np.sin(t)])

# Compute M and its inverse once
M_val = M_func(eta_val).full()
Minv = np.linalg.inv(M_val)

# --- Plot setup ---
plt.figure(figsize=(8, 8))
colors = plt.cm.viridis(np.linspace(0, 1, n_sets))

for i in range(n_sets):
    # Apply rotation to simulate time-varying orientation
    theta = (2 * np.pi / n_sets) * i  # evenly spaced full circle
    angle_span = np.pi / 1.9  # 60 degrees total
    theta = -angle_span/-1.7*0.7 + (angle_span / (n_sets - 0.8) / 0.8) * i

    R = np.array([[np.cos(theta), -np.sin(theta)],
                  [np.sin(theta),  np.cos(theta)]])
    Minv_rotated = R @ Minv
    Mirror = np.array([[0, -1],
                       [ 1, 0]])
    Minv_mirrored = Mirror @ Minv_rotated

    # Transform u-box to w-space
    w_poly = (Minv_rotated @ u_box.T).T
    w_poly = (Minv_mirrored @ u_box.T).T


    # Center polygon at origin
    centroid = np.mean(w_poly, axis=0)
    w_poly -= centroid

    # Close polygon
    w_poly = np.vstack([w_poly, w_poly[0]])

    # Plot parallelogram
    if i == 0:
        plt.plot(w_poly[:, 0], w_poly[:, 1], color=colors[1], label = "$U(\eta)$")
    else:
        plt.plot(w_poly[:, 0], w_poly[:, 1], color=colors[1])
    plt.fill(w_poly[:, 0], w_poly[:, 1], color=colors[1], alpha=0.4)

# --- Plot fixed inner circle U' ---
r_hat = 0.95
circle = Circle((0, 0), r_hat, color='red', alpha=0.8, label="$\hat{U}(\eta)$")
plt.gca().add_patch(circle)

# --- Final plot settings ---
plt.axhline(0, color='gray', linestyle='--')
plt.axvline(0, color='gray', linestyle='--')
plt.xlabel('w1')
plt.ylabel('w2')
plt.grid(True)
plt.axis('equal')
plt.legend(loc='upper right', fontsize='small')
# plt.title("Time-varying input constraint set and its worst-case approximation")
plt.show()

