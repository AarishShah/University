# normal distribution

import matplotlib.pyplot as plt
import numpy as np

x = np.random.normal(100, 7, 70) # 100 is the mean, 7 is the standard deviation, 70 is the number of data points
plt.hist(x)
plt.show()