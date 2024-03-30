# Inheritance

# Student class
class Student:
    def __init__ (self, r,n):
        self.roll = r
        self.name = n
    def greet(self):
        print(f"Hello, I am {self.name} and my roll number is {self.roll}")

# Student object
st = Student(19, "Neon")
st.greet()

# CSEStudent class inherits Student class
class CSEStudent(Student):
    pass # pass means nothing to do

# CSEStudent object
cs = CSEStudent(7, "Sage")
cs.greet()
