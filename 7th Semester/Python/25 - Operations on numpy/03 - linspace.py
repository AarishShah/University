# linspace in numpy is used to generate an array of numbers between two numbers. It is similar to arange but it returns evenly spaced numbers over a specified interval.

import numpy as np

# s = np.linspace(start, stop, num, endpoint, retstep, dtype, axis)

# start: starting value of the sequence
# stop: end value of the sequence
# num: number of samples to generate. Default is 50
# endpoint: if True, stop is the last sample. Default is True. Else last sample is not included
# retstep: if True, return (samples, step). Default is False
# dtype: data type of the output array. Default is float64
# axis: the axis in the result to store the samples. Relevant only if start or stop are array-like

# Example
a = np.linspace(1, 10, 5, True, True, int)
print(a) # [ 1  3  5  7 10]

b = np.linspace(1, 10, 5, True, True, complex)
print(b) # [ 1  3  5  7 10]
