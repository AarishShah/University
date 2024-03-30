import numpy as np

p = np.array([4,5,6,7])
q = np.array([7,8,9,5])

r = p + q
t = p - q
u = p * q
v = p / q

print(r) # [11 13 15 12]
print(t) # [-3 -3 -3  2]
print(u) # [28 40 54 35]
print(v) # [0.57142857 0.625      0.66666667 1.4       ]

# mean, median, standard deviation
print(np.mean(p)) # 5.5
print(np.median(p)) # 5.5
print(np.std(p)) # 1.118033988749895

# mode not available in numpy

# standard deviation - measure of the amount of variation or dispersion of a set of values

np.add(p, q) # [11 13 15 12]
np.subtract(p, q) # [-3 -3 -3  2]
np.matmul(p, q) # 130
np.divide(p, q) # [0.57142857 0.625      0.66666667 1.4       ]
np.sqrt(p) # [2. 2.23606798 2.44948974 2.64575131]
np.ravel(p) # [4 5 6 7] - returns a flattened array