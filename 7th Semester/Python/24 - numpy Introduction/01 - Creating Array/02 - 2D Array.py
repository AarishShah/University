import numpy

q = numpy.array([[1, 2, 3], [4, 5, 6]])  # 2D array

print(q)
print(type(q))

print(q.ndim)  # Number of dimensions
print(q[0, 1])  # Accessing an element, output should be 2
