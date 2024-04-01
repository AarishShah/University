import pandas as pd

s = pd.read_csv("person_address.csv")

# tail() is used to display the last 5 rows of the data frame
print(s.tail()) # Will print the last 5 rows of the data frame
print("-------------------------------------------------------------------")
print(s.tail(15)) # Will print the last 15 rows of the data frame, header included
