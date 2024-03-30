# methods of numpy

import numpy as np

# np.zeors
# np.ones
# np.empty_like
# np.zeros_like
# np.copy

x = np.array([[1, 2, 3], [4, 5, 6]])

# np.zeros - returns an array of zeros
print(np.zeros_like(x)) # [[0 0 0] [0 0 0]]

# np.ones - returns an array of ones
print(np.ones_like(x)) # [[1 1 1] [1 1 1]]

# np.empty_like - returns a new array with the same shape and type as a given array
print(np.empty_like(x)) # [[1 2 3] [4 5 6]]

# np.zeros_like - returns an array of zeros with the same shape and type as a given array
print(np.zeros_like(x)) # [[0 0 0] [0 0 0]]

# np.copy - returns a copy of the array
print(np.copy(x)) # [[1 2 3] [4 5 6]]