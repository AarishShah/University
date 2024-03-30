# Binomial distribution

# Parameters: n = number of trials, p = probability of success, size = number of random variables


# Given 20 trials for coin toss generate 10 data points

from numpy import random
import matplotlib.pyplot as plt
import seaborn as sn

s = random.binomial(n=20, p=0.5, size=10)
print(s) # this will print the values that follow binomial distribution function not other values

# sn.distplot(s, hist=True)
# plt.show()