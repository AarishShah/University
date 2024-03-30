# bargraph - bar graph is used to compare data between different categories

import matplotlib.pyplot as plt
import numpy as np

x = np.array(['Python', 'C', 'C++'])
y = np.array([70, 30, 45])

plt.bar(x, y)
plt.barh(x, y) # horizontal bar graph
plt.show()