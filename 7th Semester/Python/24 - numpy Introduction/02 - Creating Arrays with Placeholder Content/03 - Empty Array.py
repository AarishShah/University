import numpy

c = numpy.empty([2, 3])
print(c) # Garbage values

# The primary reason to use numpy.empty is for efficiency, as it does not take the extra step to initialize the array elements, which can save time if you plan to fill the array with specific values immediately afterward.
