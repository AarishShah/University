# The numpy.arange([start, ]stop, [step, ]dtype=None) function generates evenly spaced values within a given interval. The arguments are:

# start (optional): The start of the interval range. If omitted, it defaults to 0.
# stop: The end of the interval range. This value is not included in the output array.
# step (optional): The spacing between two adjacent values. Default is 1.
# dtype (optional): The type of the output array. If omitted, the type is inferred from other input arguments.

import numpy as np

# Create an array of numbers from 0 to 4
arr1 = np.arange(5)
print(arr1)
# Output: [0 1 2 3 4]

# Create an array starting from 1 up to 9 with a step of 2
arr2 = np.arange(1, 10, 2)
print(arr2)
# Output: [1 3 5 7 9]

# Create an array of floats
arr3 = np.arange(0, 5, 0.5)
print(arr3)
# Output: [0.   0.5   1.   1.5   2.   2.5   3.   3.5   4.   4.5]

# Each number in the sequence is 0.5 units apart from the next, starting from 0 up to but not including 5.

# In Python, and particularly when working with NumPy, numbers with a decimal point but no fractional part (e.g., 1.0, 2.0, 3.0) are still considered floating-point numbers. The representation of these numbers when printed can vary slightly depending on the context, but 1. is just a shorthand notation for 1.0.