Hungry = {"Khushboo": 1, "Humma": 18, "Aarish": 50, "Haamid": 62}
print(len(Hungry))

Hungry.pop("Humma")
print(Hungry)  # {'Khushboo': 1, 'Aarish': 50, 'Haamid': 62} ; pop() takes key as argument not value

print(Hungry.pop("Humma", "Not Found"))  # Not Found - Humma is not present in the dictionary so it returns the default value "Not Found"

# To check if a key is present in the dictionary or not
print("Khushboo" in Hungry)  # True

k = "Khushboo"

if k in Hungry:
    print(f"{k} is present in the dictionary")
else:
    print(f"{k} is not present in the dictionary")

del Hungry["Haamid"] # Dictionary[key] = value
print(Hungry)  # {'Khushboo': 1, 'Aarish': 50}

Hungry.clear()
print(Hungry)  # {}

del Hungry
# print(Hungry)  # NameError: name 'Hungry' is not defined