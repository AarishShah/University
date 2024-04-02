# Wrong Data

# Expmple of wrong data: date is 2024-12-20, but it is written as 20122024 (DDMMYYYY)

import pandas as pd
s = pd.read_csv('data2.csv')
print(s)

print("----------------------")

# The pd.to_datetime() function in pandas is used to convert argument(s) to dates.
s['Date'] = pd.to_datetime(s['Date'])
print(s)

print("type of Date column: ", s['Date'].dtype)
print("----------------------")
