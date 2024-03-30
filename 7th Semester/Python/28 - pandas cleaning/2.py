# Empty Cells

#  dropna() method allows us to remove rows and columns with empty cells from a DataFrame
#  dropna() method returns a new DataFrame, and will not change the original
#  dropna() method has the following parameters:
#  axis: 0 for rows, 1 for columns
#  how: 'any' if any empty cells are present, 'all' if all cells are empty

#  Example
'''
Roll    Marks1      Mark2
3       60          70
4       30          Nan
7       50          54
5       75          45
6       135         60
7       50          54
Nan     40          62
101     65          50
32      '61'        40

'''

import pandas as pd

s = pd.read_csv('data.csv')
t = s.dropna() # creates a new DataFrame without empty cells
print(t.to_string())

t =s.dropna(implace=True) # removes empty cells from the original DataFrame
print(s.to_string())
