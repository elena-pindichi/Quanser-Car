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

dt = 0.3
time = dt * np.arange(NMPC_states.shape[0])

# Plot trajectories
plt.figure()
plt.plot(NMPC_states[:, 0], NMPC_states[:, 1], label="NMPC Tracked")
plt.plot(FLMPC_states[:, 0], FLMPC_states[:, 1], label="FLMPC Tracked")
plt.plot(NMPC_XREF[0], NMPC_XREF[1], "--", label="Reference")
plt.grid(True)
plt.xlabel("x(m)")
plt.ylabel("y(m)")
plt.legend()
plt.title("Trajectory Vs Ref")

# Plot yaw
plt.figure()
plt.plot(time,NMPC_states[:, 2], label="NMPC_Yaw")
plt.plot(time,FLMPC_states[:, 2], label="FLMPC_Yaw")
plt.plot(time[:84],NMPC_XREF[2], '--', label="Yaw ref")
plt.grid(True)
plt.legend()
plt.title("Yaw vs Ref")

# Plot phi
plt.figure()
plt.plot(time,NMPC_states[:, 3], label="NMPC_Phi")
plt.plot(time,FLMPC_states[:, 3], label="FLMPC_Phi")
plt.plot(time[:84],NMPC_XREF[3], '--', label="Phi ref")
plt.grid(True)
plt.legend()
plt.title("Phi vs Ref")

# Plot velocity
plt.figure()
plt.plot(time[:84],NMPC_inputs, label="NMPC Input V")
plt.plot(time[:84],FLMPC_inputs, label="FLMPC Input V")
plt.plot(time[:84],NMPC_UREF[0, :len(NMPC_inputs)], '--', label="Ref V")
plt.grid(True)
plt.legend()
plt.title("Velocity vs Ref")

plt.show()
