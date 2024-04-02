# Random Probability Density Function

# Random distribution is a set of random numbers that follows a certain probability density function.

'''
Generate a 1-D array containing 50 values, where value and probability are as follows:
Value	Probability
8       0.3
7       0.1
5       0.4
3       0.1
4       0.1
2       0.0

'''

from numpy import random

s = random.choice([8,7,5,3,4,2], p=[0.3, 0.1, 0.4, 0.1, 0.1, 0.0], size=(50))
print(s)

print('-------------------')

# Do yourself
# Generate a 2-D array that draws 10 values from a binomial distribution with a probability of 0.5
t = random.choice([0, 1], p=[0.5, 0.5], size=(10, 3))
print(t)
