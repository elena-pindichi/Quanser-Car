import numpy as np
import matplotlib.pyplot as plt

# Load the data
NMPC_data = np.load("nmpc_data.npz")
FLMPC_data = np.load("flmpc_data.npz")

NMPC_XREF = NMPC_data["XREF_FULL"]
NMPC_UREF = NMPC_data["UREF_FULL"]
NMPC_states = NMPC_data["states"]
NMPC_inputs = NMPC_data["inputs"]

FLMPC_XREF = FLMPC_data["XREF_FULL"]
FLMPC_UREF = FLMPC_data["UREF_FULL"]
FLMPC_states = FLMPC_data["states"]
FLMPC_inputs = FLMPC_data["inputs"]

# Plot trajectories
plt.figure()
plt.plot(NMPC_states[:, 0], NMPC_states[:, 1], label="NMPC Tracked")
plt.plot(FLMPC_states[:, 0], FLMPC_states[:, 1], label="FLMPC Tracked")
plt.plot(NMPC_XREF[0], NMPC_XREF[1], "--", label="Reference")
plt.xlabel("x")
plt.ylabel("y")
plt.legend()
plt.title("Trajectory")

# Plot yaw
plt.figure()
plt.plot(NMPC_states[:, 2], label="Yaw")
plt.plot(NMPC_XREF[2], '--', label="Yaw ref")
plt.legend()
plt.title("Yaw vs Ref")

# Plot phi
plt.figure()
plt.plot(NMPC_states[:, 3], label="Phi")
plt.plot(NMPC_XREF[3], '--', label="Phi ref")
plt.legend()
plt.title("Phi vs Ref")

# Plot velocity
plt.figure()
plt.plot(NMPC_inputs, label="Input V")
plt.plot(NMPC_UREF[0, :len(NMPC_inputs)], '--', label="Ref V")
plt.legend()
plt.title("Velocity vs Ref")

plt.show()
