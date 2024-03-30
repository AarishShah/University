# color map in scatter

import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4])
y = np.array([10, 20, 30, 40])

colors = np.array([40, 50, 60, 70])

plt.scatter(x, y, c = colors, cmap = 'viridis') # viridis is a color map scale
plt.colorbar() # to show the color bar
plt.show()