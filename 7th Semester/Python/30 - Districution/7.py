import matplotlib.pyplot as plt
import numpy as np

x1 = np.array([1, 2, 6, 8])
y1 = np.array([3, 8, 1, 10])
x2 = np.array([5, 7, 8, 9])
y2 = np.array([10, 15, 20, 25])

plt.plot(x1, y1, 'o:r', x2, y2, 'o-.b')


# plt.plot(y) - check this out, done in class

plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Two lines on same plot', loc='right')

plt.show()