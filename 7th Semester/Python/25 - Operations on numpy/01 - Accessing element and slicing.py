import numpy as np

s = np.array([5,8,7,9])
print(s[0]) # 5

x = np.array([[1, 2, 3], [4, 5, 6]])
print(x[0,2]) # 3

# Slicing
q = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])
print(q[0:2,2]) # [3,6]

# Explanation of the slicing operation:
# 0:2, specifies the rows to select, and the second part, 2, specifies the column to select.
# 0:2 means "start from row 0 up to, but not including, row 2".
# Therefore, this selects the first two rows (0 and 1) of the array.

# 2 refers to the third column of the array.
# This means we're selecting the third column's elements from the rows we've specified in the first part of the slice.