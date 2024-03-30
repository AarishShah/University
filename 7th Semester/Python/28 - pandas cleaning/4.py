# Wrong Data

# Expmple of wrong data: date is 2024-12-20, but it is written as 20122024

import pandas as pd
s = pd.read_csv('data.csv')
s['Date'] = pd.to_datetime(s['Date'])

# String to int | as data type

s['Mark1'] = s['Mark1'].astype(int)

#  using the to_numeric() method to convert the 'Mark2' column to numbers
s['Mark2'] = pd.to_numeric(s['Mark2'], errors='coerce') # will convert to numeric and in case it fails it will replace Nan with NaT

# we have 101 roll no but i know that the roll no is between 1 and 70
s.loc[7, 'Roll'] = 10 # locate row number 7 and replace 7 with 10 - direct way

# using a for loop to change the value of the 'Roll' column
for x in s.index:
  if (s.loc[x, 'Roll'] > 70):
    s.loc[x, 'Roll'] = 1

for x in s.index:
  if (s.loc[x, 'Roll'] > 70):
    s.drop(x, inplace=True) # removes the row with the index 6. Assuming that row 6 has a roll number greater than 70