import numpy as np

# Creating arrays
x = np.ones((2, 3))   # 2x3 array of ones
s = np.zeros((2, 3))  # 2x3 array of zeros
f = np.arange(10)     # 1D array of numbers from 0 to 9
a = np.random.random((2, 3))  # 2x3 array of random numbers between 0 and 1

# Print information about array x
print("Array x information:")
print("Size:", x.size)  # Number of elements
print("Shape:", x.shape)  # Dimensions of the array
print("Data type:", x.dtype)  # Data type of the elements
print("Reshaped to 1x6:\n", x.reshape(1, 6))  # Reshaping the array
print("\nFlattened array x:\n", x.flatten()) # Flattening as an alternative to reshaping when unsure of dimensions

# Print other arrays
print("\nArray s:\n", s)
print("Array f:\n", f)
print("Array a:\n", a)