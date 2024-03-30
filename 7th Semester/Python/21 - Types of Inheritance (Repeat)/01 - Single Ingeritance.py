# Single Ingeritance - one parent and one child

class Person:
    def __init__(self, age, name):
        self.name = name
        self.age = age

    def greet(self):
        print("Good Morning")
        print(f"Name: {self.name} and Age: {self.age}")


class Employee(Person):
    def __init__(self, des, ID):
        Person.__init__(self, age=20, name="Asif")
        self.des = des
        self.ID = ID


e = Employee("Developer", 39)
e.greet()
