import pandas as pd

student = {
    "Name": ["John", "Anna", "Peter"],
    "Roll": [3, 5, 7],
}

print(student)

s = pd.DataFrame(student) # DataFrame is a 2-dimensional labeled data structure with columns of potentially different types.
print(s)