# Seaborn is a Python data visualization library based on matplotlib. It provides a high-level interface for drawing attractive and informative statistical graphics.

# Distribution plot - distplot - shows the distribution of a univariate set of observations.

import mathplotlib.pyplot as plt
import seaborn as sn

sn.distplot([0, 1, 2, 3, 4, 5], hist=False) # hist=False will remove the histogram
plt.show()
# Result will be a plot with a bell-shaped curve

sn.histplot([0, 1, 2, 3, 4, 5])
plt.show()
# Result will be a histogram

sn.kdeplot([0, 1, 2, 3, 4, 5])
plt.show()
# Result will be a kernel density estimate plot