# Use of super() function in inheritance
# Studnt object will initialize with roll number 11 and name Reyna.

class Student:
    def __init__ (self, r,n):
        self.roll = r
        self.name = n
    def greet(self):
        print(f"Hello, I am {self.name} and my roll number is {self.roll}")

class CSEStudent(Student):
    def greet(self):
        # Student.__init__(self, 1, "Sage")
        print("I am sub class")
        super().greet()
    
cs = CSEStudent(11, "Reyna")
cs.greet()