# scatter

import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4])
y = np.array([10, 20, 30, 40])

# individual color for each point
colors = np.array(['red', 'green', 'blue', 'yellow'])
plt.scatter(x, y, c = colors)
plt.show()