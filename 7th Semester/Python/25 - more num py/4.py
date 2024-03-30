import numpy as np

ar = np.array([[1, 2, 3], [4, 5, 6], [7, 1, 0]])

print(ar.sum(axis=0)) # [12 15 18]
print(ar.sum(axis=1)) # [ 6 15  8]
print(ar.sum()) # 29