import pandas as pd

d = pd.read_json("person_address.json") # Will read the json file and store it in d
# do remaining stuff

print(d)
print("-------------------------------------------------------------------")

print(d.to_string())
print("-------------------------------------------------------------------")


print(pd.options.display.max_rows)
print("-------------------------------------------------------------------")

yum = pd.options.display.max_rows = 10
print(yum)