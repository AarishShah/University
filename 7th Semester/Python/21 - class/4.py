# Hybrid Inheritance - Hybrid Inheritance is a combination of more than one type of inheritance. Basically, it is a blend of more than one type of inheritance. For example, combining Hierarchical inheritance and Multiple inheritance.

class Human:
    def __init__(self, name):
        self.name = name

    def details(self):
        print(f"The Human is {self.name}")

class Female(Human):
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Male(Human):
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Married(Female, Male):
    def __init__(self, fname, mname):
        self.fname = fname
        self.mname = mname
    def display(self):
        print(f"The Married Couple is {self.fname} and {self.mname}")

m = Married("John", "Jane")
m.display()
# m.details()
