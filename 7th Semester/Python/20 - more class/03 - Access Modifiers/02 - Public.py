# Public: No underscore

class Person:
    def __init__(self, age, name):
        self.age = age
        self.name = name

P = Person(63, "Khushboo")
print(P.name) # Asif
print(P.age) # 80

# Above values can be modified from anywhere
P.name = "Khushboo Hameed"
P.age = 22

print(P.name) # Khushboo Hameed
print(P.age) # 22