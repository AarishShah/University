import pandas as pd

s = pd.read_csv('data.csv')
print(s)
print("----------------------")


for x in s.index:
  if (s.loc[x, 'Roll'] > 70):
    s.drop(x, inplace=True) # removes the row with the index 7.

print(s)