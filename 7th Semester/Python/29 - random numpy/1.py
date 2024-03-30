# random numpy

from numpy import random

# Generate a random integer from 0 to 100
x = random.randint(100)
print(x)

# Generate a random float from 0 to 1
y = random.rand()
print(y)

# Generate a 1-D array containing 5 random integers from 0 to 100
s = random.randint(100, size=(5)) # same as size=(1, 5)
s = random.randint(100, size=(1, 5))
s = random.randint(100, size=(5,)) # same as size=(5)
s = random.randint(100, size=(0,5))
print(s)

# Generate a 2-D array with 3 rows, each row containing 5 random integers from 0 to 100
b = random.randint(100, size=(3, 5)) # Size gives the shape of the array
print(b)

# Generate a 1-D array containing 5 random floats
c = random.rand(5)
print(c)
