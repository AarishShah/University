### Missed portion of the class
### inheritence

class Student:
    def __init__ (self, r,n):
        self.roll = r
        self.name = n
    def greet(self):
        print(f"Hello, I am {self.name} and my roll number is {self.roll}")

st = Student(19, "Neon")
st.greet()

class CSEStudent(Student):
    pass

cs = CSEStudent(7, "Sage")
cs.greet()

###
class CSEStudent(Student):
    def greet(self):
        print("I am sub class")

cs = CSEStudent(7, "Sage")
cs.greet()

###
class CSEStudent(Student):
    def greet(self):
        Student.greet(self)
        print("I am sub class")

cs = CSEStudent(11, "Reyna")
cs.greet()

###
class CSEStudent(Student):
    def greet(self):
        Student(self).__init__(self, 11, "Reyna")
        print("I am sub class")
    
cs = CSEStudent(11, "Reyna")
cs.greet()

###
class CSEStudent(Student):
    def greet(self):
        Student.__init__(self, 11, "Reyna")
        print("I am sub class")
        super().greet()

cs = CSEStudent(11, "Reyna")