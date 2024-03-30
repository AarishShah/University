# Multiple inheritance occurs when a class inherits from more than one base class. This allows the subclass to inherit attributes and methods from all the base classes.

class Father:
    def methodFather(self):
        print("Father's method")

class Mother:
    def methodMother(self):
        print("Mother's method")

class Child(Father, Mother):
    def methodChild(self):
        print("Child's method")

# Example
c = Child()
c.methodFather()  # Inherited from Father
c.methodMother()  # Inherited from Mother
c.methodChild()   # Defined in Child
