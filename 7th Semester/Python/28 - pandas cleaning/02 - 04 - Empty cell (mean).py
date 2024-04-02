import pandas as pd

# we usually use the mean, median, or mode of the column to fill empty cells

# we take the mean of the 'Marks2' column and replace the empty cells with the mean
s = pd.read_csv('data.csv')
print(s)

print('----------------------')

avg = s['Marks2'].mean() # 54.375
s.fillna({'Marks2': avg},  inplace=True)
print(s)