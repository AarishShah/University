# Distribution plot - distplot - shows the distribution of a univariate (means one variable) set of observations.

import matplotlib.pyplot as plt
import seaborn as sn

sn.distplot([0, 1, 2, 3, 4, 5], hist=False) # hist=False will remove the histogram
plt.show()
# distplot - combines histogram with a kernel density estimate plot

sn.histplot([0, 1, 2, 3, 4, 5])
plt.show()
# Result will be a histogram

sn.kdeplot([0, 1, 2, 3, 4, 5])
plt.show()
# Result will be a kernel density estimate plot