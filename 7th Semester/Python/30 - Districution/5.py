# Matplotlib -  is a plotting library for the Python programming language and its numerical mathematics extension NumPy.

# PyPlot - Pyplot is a Matplotlib module which provides a MATLAB-like interface.

# Pyplot is a collection of command style functions that make Matplotlib work like MATLAB. Each Pyplot function makes some change to a figure: e.g., creates a figure, creates a plotting area in a figure, plots some lines in a plotting area, decorates the plot with labels, etc.

import matplotlib.pyplot as plt
import numpy as np

x = np.array([0,50])
y = np.array([0,200])

plt.plot(x, y)
plt.plot(x, y, 'o')
plt.show()