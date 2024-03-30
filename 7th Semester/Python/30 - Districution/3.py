# Poissons distribution

# Poisson Distribution is a Discrete Distribution.
# It estimates how many times an event can happen in a specified time. e.g. If someone eats twice a day what is probability he will eat thrice?

# It has two parameters:
# lam - rate or known number of occurences e.g. 2 for above problem.
# size - The shape of the returned array.

# Generate a random 1x10 distribution for occurence 3:
# Occurance means the number of times the event occurs.

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn

# poisson distribution
p = random.poisson(lam=3, size=(1,10))
sn.displot(p)
plt.show()