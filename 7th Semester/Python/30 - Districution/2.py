# Exponential distribution

# Exponential distribution is used for describing time till next event e.g. failure/success etc.

# It has two parameters:
# scale - inverse of rate ( see lam in poisson distribution ) defaults to 1.0.
# size - The shape of the returned array.

# Draw out a sample for exponential distribution with 2.0 scale with 2x3 size:

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn

# exponential distribution
e = random.exponential(scale=2, size=(2,3))
sn.distplot(random.exponential(size=1000), hist=False)
# sn.distplot(e, hist=False)

plt.show()

# check for error