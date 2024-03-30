# Corelation in data

import pandas as pd

s = pd.read_csv('data.csv')
print(s.corr()) # returns the correlation between columns in a DataFrame. Will create a new table with correlation coefficients

# the correlation coefficient ranges from -1 to 1