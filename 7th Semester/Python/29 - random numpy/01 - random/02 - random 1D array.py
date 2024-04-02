# random numpy

from numpy import random

# Generate a 1-D array containing 5 random integers from 0 to 100
a = random.randint(100, size=(5)) 
b = random.randint(100, size=(5,)) # same as above
c = random.randint(100, size=(1, 5))
d = random.randint(100, size=(0,5))

# Generate a 1-D array containing 5 random floats
e = random.rand(5)

print(a)
print(b)
print(c)
print(d)
print(e)