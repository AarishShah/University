# s=np.zeros((2,3)) - will create a 2x3 array of zeros
# x=np.ones((2,3)) - will create a 2x3 array of ones
# f=np.arange(10) - will create a 1x10 array of numbers from 0 to 9
# a=np.random.rando(2,3) - will create a 2x3 array of random numbers

import numpy as np

s = np.zeros((2, 3))
x = np.ones((2, 3))
f = np.arange(10)
a = np.random.random((2, 3))

print(x.shape) # (2, 3)
print(x.dtype) # float64
print(x.size) # 6
print(x.reshape(1, 6)) # [[1. 1. 1. 1. 1. 1.]]