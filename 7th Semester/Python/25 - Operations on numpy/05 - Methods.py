# methods of numpy

import numpy as np

# np.zeors
# np.ones
# np.empty_like
# np.zeros_like
# np.copy

Sage = np.array([[1, 2, 3], [4, 5, 6]])

# np.zeros -  # Create a 2x3 array filled with zeros
zeros_array = np.zeros((2, 3))
print(np.zeros((2, 3))) # [[0. 0. 0.] [0. 0. 0.]]

# np.ones - Create a 2x3 array filled with ones
print(np.ones((2, 3))) # [[1. 1. 1.] [1. 1. 1.]]

# np.empty_like - Produces a new array that has the same shape and type as x. However, np.empty_like does not initialize the array entries, so they will contain arbitrary values
print(np.empty_like(Sage)) # Random values

# # np.zeros_like - returns a new array of zeros with the same shape and type as a given array
print(np.zeros_like(Sage)) # [[0 0 0] [0 0 0]]

# # np.copy - Creates a copy of an array.
print(np.copy(Sage)) # [[1 2 3] [4 5 6]]

# shape - shape gives the dimensions of the array
# size - size gives the total number of elements in the 