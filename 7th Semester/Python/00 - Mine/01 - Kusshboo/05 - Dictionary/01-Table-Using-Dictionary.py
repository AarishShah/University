MyDictionary = {}

for i in range(1,11):
    MyDictionary[i] = i * 4

for a,b in MyDictionary.items():
    print(f"{a} * 4 = {b}")