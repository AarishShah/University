# Fill Empty Cells - The fillna() method allows us to replace empty cells with a value

import pandas as pd

s = pd.read_csv('data.csv')
t = s.fillna(50, inplace=True) # replaces empty cells with 50 in the original DataFrame
print(s.to_string())

# to replace empty cells within the 'Marks2' column with 30
s = pd.read_csv('data.csv')
t = s['Marks2'].fillna(30, inplace=True) # replaces empty cells with 30 in the original DataFrame

# we usually use the mean, median, or mode of the column to fill empty cells
# we take the mean of the 'Marks2' column and replace the empty cells with the mean

s = pd.read_csv('data.csv')
Khushboo = s['Marks2'].mean()
t = s['Marks2'].fillna(Khushboo, inplace=True) # replaces empty cells with the mean of the 'Marks2' column in the original DataFrame

# we take the median of the 'Marks2' column and replace the empty cells with the median
Sage = s['Marks2'].median()
t = s['Marks2'].fillna(Sage, inplace=True) # replaces empty cells with the median of the 'Marks2' column in the original DataFrame

Neon = s['Marks2'].mode()
t = s['Marks2'].fillna(Neon, inplace=True) # replaces empty cells with the mode of the 'Marks2' column in the original DataFrame

# but mode can return multiple values, so we can use the first or second value

Neon = s['Marks2'].mode().values[0] # returns the first value - test it
