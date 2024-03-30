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

# question
# 3x3 mean=2, std=1

s = random.normal(loc=2, scale=1, size=(3, 3))
print(s)

sn.distplot(s, hist=False)
plt.show()