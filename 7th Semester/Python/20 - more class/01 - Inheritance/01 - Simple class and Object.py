### Missed portion of the class
### inheritence

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
