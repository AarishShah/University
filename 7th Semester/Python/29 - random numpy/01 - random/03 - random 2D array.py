# random numpy

from numpy import random

# Generate a 2-D array with 3 rows, each row containing 5 random integers from 0 to 100
b = random.randint(100, size=(3, 5)) # Size gives the shape of the array
print(b)
