# define size dot in scatter

# color map in scatter

import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4])
y = np.array([10, 20, 30, 40])

colors = np.array([40, 50, 60, 70])
Dotsize = np.array([100, 20, 30, 40])

plt.scatter(x, y, c = colors, cmap = 'viridis', s = Dotsize) # viridis is a color map scale
plt.colorbar() # to show the color bar
plt.show()