# LOC - will tell the the top of the graph
# size - will tell the size of the graph - how many elements made up the graph
# scale - will tell the scale of the graph - how wide the graph is

# std - standard deviation scale

# Gaussian Distribution

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn

n = random.normal(loc=0, scale=1, size=1000)
print(n)
sn.distplot(n, hist=False)
plt.show()
