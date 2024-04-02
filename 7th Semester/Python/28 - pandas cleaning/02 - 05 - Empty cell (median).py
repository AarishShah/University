import pandas as pd

# we usually use the mean, median, or mode of the column to fill empty cells

# # we take the median of the 'Marks2' column and replace the empty cells with the median
s = pd.read_csv('data.csv')
print(s)

print('----------------------')

mdn = s['Marks2'].median() # 54.0
s.fillna({'Marks2': mdn},  inplace=True)
print(s)
