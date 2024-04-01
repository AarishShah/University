import pandas as pd

student = {
    "Name": ["John", "Anna", "Peter"],
    "Roll": [3, 5, 7],
}

print(student)

s = pd.DataFrame(student) # Two-dimensional, size-mutable, potentially heterogeneous tabular data.
print(s)