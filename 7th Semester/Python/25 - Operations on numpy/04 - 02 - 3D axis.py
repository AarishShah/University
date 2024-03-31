# Not done in class

import numpy as np

# Create a 3D NumPy array
khushboo = np.array([[[1, 2, 3], [4, 5, 6]],
                     [[7, 8, 9], [10, 11, 12]],
                     [[13, 14, 15], [16, 17, 18]]])

# Sum across axis=0 (depth) - [1+7+13, 2+8+14, 3+9+15], [4+10+16, 5+11+17, 6+12+18
print(khushboo.sum(axis=0))

# Sum across axis=1 (rows) - [1+4, 2+5, 3+6], [7+10, 8+11, 9+12], [13+16, 14+17, 15+18]
print(khushboo.sum(axis=1))

# Sum across axis=2 (columns) - [1+2+3, 4+5+6], [7+8+9, 10+11+12], [13+14+15, 16+17+18]
print(khushboo.sum(axis=2))

# Total sum of all elements
print(khushboo.sum())
