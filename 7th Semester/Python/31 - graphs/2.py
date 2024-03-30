# scatter - for scatter plot
# helps in clustering points

import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4, 5, 6])
y = np.array([10, 20, 30, 40, 50, 60])

s = np.array([200, 300, 400, 500, 600, 700])
t = np.array([1, 2, 3, 4, 5, 6])

plt.scatter(x, y)
plt.scatter(s, t)

plt.scatter(x, y, color = 'r') # default color is blue, and 2nd graph is orange

plt.show()