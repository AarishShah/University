# Use of super() function in inheritance
# In this code Student is initialized with roll number 1 and name Sage. The greet method of the CSEStudent class is overridden to print "I am sub class" and then call the greet method of the Student class using the super() function. The greet method of the Student class is overridden to print "Hello, I am Sage and my roll number is 1".

class Student:
    def __init__ (self, r,n):
        self.roll = r
        self.name = n
    def greet(self):
        print(f"Hello, I am {self.name} and my roll number is {self.roll}")

class CSEStudent(Student):
    def greet(self):
        Student.__init__(self, 1, "Sage")
        print("I am sub class")
        super().greet()

cs = CSEStudent(11, "Reyna")
cs.greet()