import pandas as pd

f = pd.read_csv("try.csv") # Will read the csv file and store it in f
print(f) # Will print the data in the csv file

print(f.to_string()) # Will print the data in the csv file as a string

# max_rows and max_columns are used to set the maximum number of rows and columns to be displayed
print(pd.options.display.max_rows) # Will print the maximum number of rows to be displayed by my system

yum = pd.options.display.max_rows = 10
print(yum)