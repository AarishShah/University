# Array with the Same Shape is Created with Zeros as Placeholder Content
# Assuming 'x' is an existing numpy array. The correct function name is 'zeros_like'.
# numpy.zerolike(x)  # Incorrect function name (done in class)

import numpy

x = numpy.array([[1, 2, 3], [4, 5, 6]])
d = numpy.zeros_like(x)

print(d)