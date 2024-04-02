# LOC - will tell the the top of the graph
# size - will tell the size of the graph - how many elements made up the graph
# scale - will tell the scale of the graph - how wide the graph is

# std - standard deviation scale

# Gaussian Distribution

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn

# question: create a 3x3 matrix with mean=2 and std=1

s = random.normal(size=(3, 3), loc=2 , scale=1) # position of argument does not matter
print(s)

sn.distplot(s, hist=False)
plt.show()