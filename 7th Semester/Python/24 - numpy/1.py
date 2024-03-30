import numpy
s = numpy.array([1, 2, 3, 4])  # 1d
print(s)
print(type(s))
print(s.ndim)
print(s[0])
q = numpy.array([[1, 2, 3], [4, 5, 6]])
print(q[0, 1])
Q = numpy.array([[[1, 2, 3], [4, 5, 6], [7, 8, 9]]])
print(q[0, 1, 2])
# np arrage try it
x = numpy.array([1, 2, 3], [4, 5, 6])
numpy.zeros([5, 5])
numpy.ones([3, 5])
numpy.empty(x)
numpy.zerolike(x)
y = numpy.copy(x)
# [60] 0d array / scaler array
# 2d 3d
