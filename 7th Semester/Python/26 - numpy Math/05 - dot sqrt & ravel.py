import numpy as np

p = np.array([4, 5, 6, 7])
q = np.array([7, 8, 9, 5])

print(np.matmul(p, q))  # 157 - dot product of two arrays
print(np.sqrt(p))  # [2. 2.23606798 2.44948974 2.64575131]
print(np.ravel(p))  # [4 5 6 7] - returns a flattened array