# Data frames - is a 2-dimensional labeled data structure with columns of potentially different types.

import pandas as pd

python = {
    "Name": ["John", "Anna", "Peter"],
    "Roll": [3, 9, 5],
}

s = pd.DataFrame(python)
print(s)

print("~~~~~~~~~~~~~~")
print(s.loc[0]) # Will locate the first row


print("~~~~~~~~~~~~~~")
print(s.loc[[0,1]]) # Will locate the first and second row
