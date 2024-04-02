# Correlation in data

import pandas as pd

s = pd.read_csv('data.csv')
print(s)

# using the to_numeric() method to convert the 'Marks' column to numbers so we can calculate the correlation
s['Marks1'] = pd.to_numeric(s['Marks1'], errors='coerce')

print(s.corr()) # returns the correlation between columns in a DataFrame. Will create a new table with correlation coefficients

# the correlation coefficient ranges from -1 to 1