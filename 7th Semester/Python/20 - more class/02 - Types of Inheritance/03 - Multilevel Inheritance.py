# In multilevel inheritance, a class inherits from a base class, and then another class inherits from this derived class, creating a "chain" of inheritance. It allows for a hierarchy of classes that build upon each other.

class Grandparent:
    def methodGrandparent(self):
        print("Grandparent's method")

class Parent(Grandparent):
    def methodParent(self):
        print("Parent's method")

class Child(Parent):
    def methodChild(self):
        print("Child's method")

# Example
child = Child()
child.methodGrandparent()  # Inherited from Grandparent
child.methodParent()       # Inherited from Parent
child.methodChild()        # Defined in Child
