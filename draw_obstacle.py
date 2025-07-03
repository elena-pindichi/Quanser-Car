import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle
from itertools import product

# Parameters
M = 1e5  # corrected ^ to ** or use 1e5
grid_range = np.arange(-2.5, 2.6, 1.0)

A = np.array([[1, 0],
              [-1, 0],
              [0, 1],
              [0, -1]])

fig, ax = plt.subplots(figsize=(8, 8))  # or larger like (10, 10)

# Draw blue regions outside the obstacle
for x in grid_range:
    for y in grid_range:
        point = np.array([x + 0.5, y + 0.5])
        violated = A @ point > -1
        if any(violated):
            ax.add_patch(Rectangle((x, y), 1.0, 1.0, facecolor='blue', alpha=0.3))

# Obstacle
obstacle = Rectangle((-1, -1), 2.0, 2.0, facecolor='white', edgecolor='red', linewidth=4)
ax.add_patch(obstacle)

# Red delimitation lines
for i in range(-2, 3):
    if i == -1 or i == 1:
        ax.plot([i, i], [-2.5, -1], 'r', linewidth=3)
        ax.plot([i, i], [1, 2.5], 'r', linewidth=3)
for j in range(-2, 3):
    if j == -1 or j == 1:
        ax.plot([-2.5, -1], [j, j], 'r', linewidth=3)
        ax.plot([1, 2.5], [j, j], 'r', linewidth=3)

# Final plot settings
ax.set_xlim(-2.5, 2.5)
ax.set_ylim(-2.5, 2.5)
ax.set_aspect('equal')
ax.set_xticks(grid_range)
ax.set_yticks(grid_range)
ax.grid(True, which='both', color='gray', linewidth=0.5, linestyle='--')
ax.set_title("Polyhedral Obstacle and Complement")

# Save as PDF (full page, high quality)
fig.savefig("polyhedral_regions.pdf", format='pdf', bbox_inches='tight', dpi=300)

plt.show()
