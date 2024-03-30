# subplot - to have a plot(grpah) inside another plot(graph)

# parameters: nrows, ncols, index
# index starts from 1 - left to right, top to bottom
# immagine a grid of 2 rows and 2 columns, the index will be like this 1 you are in the first row and first column, 2 you are in the first row and second column, 3 you are in the second row and first column, 4 you are in the second row and second column


import matplotlib.pyplot as plt
import numpy as np


# left side wala plot
x = np.array([0, 1, 2, 3])
y = np.array([3, 8, 9, 10])

plt.subplot(1, 2, 1)
plt.plot(x, y)
plt.title("Result 1")

# right side wala plot
s = np.array([0, 1, 2, 3])
t = np.array([7, 8, 9, 10])

plt.subplot(1, 2, 2)
plt.plot(s, t)
plt.title("Result 2")

plt.suptitle("Evil Khushboo")

plt.show()