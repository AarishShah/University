# Logistic Distribution

# Parameters:
# loc - mean, where the peak is. Default 0.
# scale - standard deviation, the flatness of distribution. Default 1.
# size - The shape of the returned array.

# Draw 2x3 samples from a logistic distribution with mean at 2 and scale = 3

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn


l = random.logistic(loc=2, scale=3, size=(2,3))
sn.distplot(l, hist=False)

sn.distplot(random.logistic(loc=2, scale=3, size=(2,3)), hist=False)
plt.show()

# since disploat is deprecated, we can use kdeplot