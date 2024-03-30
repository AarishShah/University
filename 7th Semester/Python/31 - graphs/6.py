# scatter mixed

import matplotlib.pyplot as plt
import numpy as np

x = np.random.randint(100, size = (100))
y = np.random.randint(100, size = (100))

colors = np.random.randint(100, size = (100))
Dotsize = np.random.randint(100, size = (100))

plt.scatter(x, y, c = colors, cmap = 'viridis', s = Dotsize, alpha=0.5) # alpha is for transparency
plt.colorbar() # to show the color bar
plt.show()