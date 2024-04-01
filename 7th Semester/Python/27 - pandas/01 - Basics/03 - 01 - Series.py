# Series - will create a series from a list, the first column is the index and the second column is the value.
# First column is called label and the second column is called value.

import pandas as pd

a = [3,5,7]

sparrow = pd.Series(a)
print(sparrow)
print(sparrow[0])

parrot = pd.Series(a, index=["a", "b", "c"])
print(parrot)
print(parrot["b"])