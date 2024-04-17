# The .astype() function in pandas is used to cast a pandas object to a specified dtype. dtype can be a numpy dtype or Python type, which can include:

# int: for integer numbers.
# float: for floating-point numbers.
# str: for text or string data.
# bool: for Boolean True/False values.
# category: for categorical data.
# datetime64[ns]: for date and time data.

import pandas as pd

s = pd.read_csv('data2.csv')
print(s)

s['Marks'] = s['Marks'].astype(float)
print(s)