import pandas as pd

s = pd.read_csv("person_address.csv")
print(s.head()) # Will print the first 5 rows of the data frame
print("-------------------------------------------------------------------")
print(s.head(15)) # Will print the first 15 rows of the data frame, header included
