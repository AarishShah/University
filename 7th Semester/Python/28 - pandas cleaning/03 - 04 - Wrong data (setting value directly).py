import pandas as pd

s = pd.read_csv('data.csv')
print(s)

# we have 101 roll no but I know that the roll no is between 1 and 70
s.loc[7, 'Roll'] = 10 # locate row number 7 and replace 7 with 10 - direct way
print(s)