# Multiple Inheritance - Method Resolution Order (MRO) means the order in which the base classes are called in the event of multiple inheritance.

class Employee:
    def __init__(self, name):
        self.name = name

    def details(self):
        print(f"The Employee is {self.name}")

class Coder:
    def __init__(self, language):
        self.language = language

    def details(self):
        print(f"The known language is {self.language}")

class Programmer(Employee, Coder):
# class Programmer(Coder, Employee):       
    def __init__(self, language, name):
        self.language = language
        self.name = name

p = Programmer("Python", "Asif")
print(p.name)
print(p.language)

p.details() # The method from the first class will always be called

print(Programmer.mro()) # Method Resolution Order (MRO) means the order in which the base classes are called in the event of multiple inheritance. This will give the order in which the base classes are called in the event of multiple inheritance.