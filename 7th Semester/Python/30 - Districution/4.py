# Uniform Distances - used to describe where every event has an equal chance of occuring
# a -> lower bound
# b -> upper bound
# size -> shape of the returned array

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn

x = random.uniform(size=(2, 3))
print(x)
sn.distplot(random.uniform(size=1000), hist=False)
plt.show()