# choice numpy

# Random distribution is a set of random numbers that follows a certain probability density function.
# Probability density function is a function that describes a continuous probability. i.e. probability of all values in an array.
# We can generate random numbers based on defined probabilities using the choice() method of the random module.

from numpy import random

# Generate a random integer from provided list
s = random.choice([8,7,4,2,1])
print(s)

# Generate a random array of size 5x3 from provided list
t = random.choice([8,7,4,2,3], size=(5,3))
print(t)
