# Data frames - is a 2-dimensional labeled data structure with columns of potentially different types.

import pandas as pd

python = {
    "Name": ["John", "Anna", "Peter"],
    "Roll": [3, 9, 5],
}

s = pd.DataFrame(python)
print(s)
print("~~~~~~~~~~~~~~")

q = pd.DataFrame(python, index=["one", "two", "three"])
print(q) # Will print the same as s but with different index


print("~~~~~~~~~~~~~~")
print(q.loc["one"]) # Will locate the first row


print("~~~~~~~~~~~~~~")
print(q.loc[["one", "two"]]) # Will locate the first row
