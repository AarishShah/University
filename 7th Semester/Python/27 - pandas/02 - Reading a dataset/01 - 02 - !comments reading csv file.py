import pandas as pd

f = pd.read_csv("person_address.csv")
print(f)  
print("-------------------------------------------------------------------")

print(f.to_string()) 
print("-------------------------------------------------------------------")


print(pd.options.display.max_rows)
print("-------------------------------------------------------------------")

yum = pd.options.display.max_rows = 10
print(yum)
