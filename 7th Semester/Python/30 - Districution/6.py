
import matplotlib.pyplot as plt
import numpy as np

# Plot from (1,3) to (2, 8) then to (6, 1) and finally to (8, 10)
x = np.array([1, 2, 6, 8])
y = np.array([3, 8, 1, 10])

# plt.plot(x, y)
# plt.show()

# # for marker
# plt.plot(x, y, marker='o', ms=20) # ms is marker size
# plt.show()

# # color
# plt.plot(x, y, marker='o', ms=20, color='r') # r is red
# plt.show()

# # edge color
# plt.plot(x, y, marker='o', ms=20, mec='r') # r is red
# plt.show()

# # marker face color
# plt.plot(x, y, marker='o', ms=20, mfc='r') # r is red, hex is also supported like '#FF0000'
# plt.show()

# line style
plt.plot(x, y, linestyle='dashed') # dashed line or 'dotted', 'dashdot', 'solid'.  we can also use '-.', '--', ':', '-'
plt.show()

# color of line
plt.plot(x, y, color='g') # g is green
plt.show()

# line width
plt.plot(x, y, linewidth=20) # line width
plt.show()

# string formatting
plt.plot(x, y, 'o:r') # marker, line, color
plt.show()