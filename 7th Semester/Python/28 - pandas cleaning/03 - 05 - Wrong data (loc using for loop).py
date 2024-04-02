import pandas as pd

s = pd.read_csv('data.csv')
print(s)
print("----------------------")

# changing the value of the 'Roll' column where the value is greater than 70
for x in s.index:
  if (s.loc[x, 'Roll'] > 70):
    s.loc[x, 'Roll'] = 1

print(s)