import pandas as pd

# head() is used to display the first 5 rows of the data frame

s = pd.read_csv("try.csv")
print(s.head()) # Will print the first 5 rows of the data frame
print(s.head(15)) # Will print the first 15 rows of the data frame, header included

# tail() is used to display the last 5 rows of the data frame
print(s.tail()) # Will print the last 5 rows of the data frame
print(s.tail(15)) # Will print the last 15 rows of the data frame, header included

# info() is used to display the concise summary of the data frame - schema of the data frame - kiska kya type hai
print(s.info()) # Will print the concise summary of the data frame