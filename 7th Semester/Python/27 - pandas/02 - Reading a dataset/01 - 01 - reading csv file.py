import pandas as pd

# Will read the csv file and store it in f
f = pd.read_csv("person_address.csv")
print(f)  # Will print the data in the csv file

print("-------------------------------------------------------------------")

print(f.to_string())  # Will print the data in the csv file as a string

print("-------------------------------------------------------------------")

# max_rows and max_columns are used to set the maximum number of rows and columns to be displayed
# Before changing this setting, its value is 60, meaning pandas is configured to display up to 60 rows when a DataFrame is printed. If a DataFrame exceeds this number of rows, pandas will display only the first few and last few rows, truncating the middle rows.
print(pd.options.display.max_rows)

# if a DataFrame exceeds 10 rows, pandas will only display the first 5 and last 5 rows, truncating the middle.
yum = pd.options.display.max_rows = 10
print(yum)
