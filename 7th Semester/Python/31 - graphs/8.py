# bargraph - bar graph is used to compare data between different categories
# difference beween bad and histogram is that bar graph is used to compare data between different categories, while histogram is used to show the frequency of data

import matplotlib.pyplot as plt
import numpy as np

x = np.array(['Python', 'C', 'C++'])
y = np.array([70, 30, 45])

plt.bar(x, y, width=0.1, color='red') # in horizontal bar graph, height is used instead of width
plt.show()