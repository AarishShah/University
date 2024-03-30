import matplotlib.pyplot as plt
import numpy as np

x = np.array([80, 30, 40, 20])
y = np.array([30, 90, 50, 10])

font1 = {'family': 'serif', 'color': 'blue', 'size': 20}
plt.title('Result', loc='left', fontdict=font1)
plt.show()

# grid
plt.grid()
plt.show()

# show only x-axis grid
plt.grid(axis='x')
plt.show()

# show only y-axis grid
plt.grid(axis='y')
plt.show()

plt.grid(color='green', linestyle='-.', linewidth=2)
plt.show()