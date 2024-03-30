# In hierarchical inheritance, multiple subclasses inherit from a single superclass. This allows different subclasses to share a common base class.

class Parent:
    def methodParent(self):
        print("Parent's method")

class Child1(Parent):
    def methodChild1(self):
        print("Child1's method")

class Child2(Parent):
    def methodChild2(self):
        print("Child2's method")

# Example
child1 = Child1()
child2 = Child2()
child1.methodParent()  # Inherited from Parent
child2.methodParent()  # Inherited from Parent
child1.methodChild1()  # Defined in Child1
child2.methodChild2()  # Defined in Child2
