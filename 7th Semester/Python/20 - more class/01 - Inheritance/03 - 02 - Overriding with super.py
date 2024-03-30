# Override the greet method of the Student and call the greet method of the Student class from the greet method of the CSEStudent class.

class Student:
    def __init__ (self, r,n):
        self.roll = r
        self.name = n
    def greet(self):
        print(f"Hello, I am {self.name} and my roll number is {self.roll}")

class CSEStudent(Student):
    def greet(self):
        Student.greet(self)
        print("I am sub class")

cs = CSEStudent(11, "Reyna")
cs.greet()