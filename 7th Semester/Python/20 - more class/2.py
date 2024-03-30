# types of inheritance
# 1. single inheritance
# 2. multiple inheritance
# 3. multilevel inheritance
# 4. Hybrid inheritance
# 5. hierarchical inheritance

# single inheritance - one parent and one child
# multiple inheritance - one parent and multiple child
# multilevel inheritance - one parent and one child and one grand child
# Hybrid inheritance - combination of any two inheritance
# hierarchical inheritance - one parent and multiple child

# single inheritance
class Parent:
    def m1(self):
        print("Parent class method")
class Child(Parent):
    def m2(self):
        print("Child class method")

c = Child()
c.m1()
c.m2()

# method overriding - same method name in parent and child class