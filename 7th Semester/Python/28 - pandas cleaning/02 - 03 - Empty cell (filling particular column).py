import pandas as pd

# to replace empty cells within the 'Marks2' column with 30
s = pd.read_csv('data.csv')
s.fillna({'Marks2': 30},  inplace=True) # replaces empty cells with 30 in the original DataFrame
print(s)

# Sir's method had an error, so I corrected it
# Sir's method
# s['Marks2'].fillna(30, inplace=True)

# FutureWarning: A value is trying to be set on a copy of a DataFrame or Series through chained assignment using an inplace method.
# The behavior will change in pandas 3.0. This inplace method will never work because the intermediate object on which we are setting values always behaves as a copy.

# For example, when doing 'df[col].method(value, inplace=True)', try using 'df.method({col: value}, inplace=True)' or df[col] = df[col].method(value) instead, to perform the operation inplace on the original object.
