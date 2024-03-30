# pie chart

import matplotlib.pyplot as plt
import numpy as np

x = np.array([10,35,30,45]) # 10 divided by 120, 35 divided by 120, 30 divided by 120, 45 divided by 120. 120 is the sum of all the values
label = np.array(['Python', 'C', 'C++', 'Java']) # goes in anti-clockwise direction

y = np.array([0.1, 0.1, 0.1, 0.1])
mycolors = ['red', 'blue', 'green', 'yellow']

# autopct is used to display the percentage of each slice
# explode is used to separate the slices
 # startangle is the angle at which the first slice starts
plt.pie(x, labels=label, startangle=90, explode= y, shadow=True,colors= mycolors, autopct='%1.1f%%')
plt.legend(title='Languages')
plt.show()

# autupcr - not done in class