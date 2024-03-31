# Numpy Properties

# x.reshape(2, 3) - will reshape the given array to 2 rows and 3 columns, but the original array will not be changed
# x.size - will return the number of elements in the array
# x.shape - will return the shape of the array
# x.dtype - will return the data type of the elements in the array
# x.itemsize - will return the size of the elements in the array in bytes

import numpy as np

ar = np.array([[1, 2, 3], [4, 5, 6], [7, 1, 0]])

print(ar.reshape(1, 9)) # [[1 2 3 4 5 6 7 1 0]]
print(ar.size) # 9
print(ar.shape) # (3, 3)
print(ar.dtype) # int32
print(ar.itemsize) # 4 bytes