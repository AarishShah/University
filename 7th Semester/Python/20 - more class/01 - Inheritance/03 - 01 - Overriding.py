# method overriding - same method name in parent and child class

# Override the greet method in the CSEStudent class to print "I am sub class" instead of "Hello, I am Reyna and my roll number is 11".

class Student:
    def __init__ (self, r,n):
        self.roll = r
        self.name = n
    def greet(self):
        print(f"Hello, I am {self.name} and my roll number is {self.roll}")

class CSEStudent(Student):
    def greet(self):
        print("I am sub class")

cs = CSEStudent(7, "Sage")
cs.greet()