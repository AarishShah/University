# Series - will create a series from a list, see the first column is the index and the second column is the value.
# First column is called label and the second column is called value.

import pandas as pd

a = [3,5,7]

s = pd.Series(a)
print(s)
print(s[0])

# `````

p = pd.Series(a, index=["a", "b", "c"])
print(p)
print(p["b"])