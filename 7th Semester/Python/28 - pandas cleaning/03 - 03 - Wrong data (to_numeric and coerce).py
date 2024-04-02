# hover over the function to read the documentation

import pandas as pd

s = pd.read_csv('data.csv')
print(s)

#  using the to_numeric() method to convert the 'Marks' column to numbers
s['Marks1'] = pd.to_numeric(s['Marks1'], errors='coerce') # will convert to numeric and in case it fails it will replace Nan with NaN
print(s)