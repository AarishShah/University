# Notion: https://7thsemester.notion.site/Axis-in-NumPy-5eb4ebff1ff14742a4c767e5d43e81a2?pvs=4

import numpy as np

ar = np.array([[1, 2, 3], [4, 5, 6], [7, 1, 0]])

print(ar)

# Sum across columns (vertical)
print(ar.sum(axis=0))  # Output will be the sum of each column

# Sum across rows (horizontal)
print(ar.sum(axis=1))  # Output will be the sum of each row

# Total sum of all elements
print(ar.sum())  # Output will be the sum of all elements in the array