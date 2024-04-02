import pandas as pd

# we usually use the mean, median, or mode of the column to fill empty cells

# we take the mode of the 'Marks2' column and replace the empty cells with the mode
s = pd.read_csv('data.csv')
print(s)

print('----------------------')

mode = s['Marks2'].mode().values[0] # returns the first value
print(mode)

# # mode can return multiple values, so we can use the first or second value.
# in this example mode retured only one value

s.fillna({'Marks2': mode},  inplace=True)
print(s)
