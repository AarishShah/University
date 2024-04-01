import pandas as pd

# head() is used to display the first 5 rows of the data frame

s = pd.read_csv("person_address.csv")

# info() is used to display the concise summary of the data frame - schema of the data frame - kiska kya type hai
print(s.info()) # Will print the concise summary of the data frame