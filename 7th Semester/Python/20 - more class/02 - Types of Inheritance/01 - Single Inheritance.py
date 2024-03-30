# Notion: https://7thsemester.notion.site/Types-of-Inheritance-e52b39a0bd50441eb23a8dccc959106e?pvs=4

# In single inheritance, a subclass inherits from one superclass. This is the most straightforward form of inheritance, allowing the subclass to utilize and extend the functionality of the superclass.

# single inheritance
class Parent:
    def methodA(self):
        print("Parent method")

class Child(Parent):
    def methodB(self):
        print("Child method")

# Example
c = Child()
c.methodA()  # Calls method from Parent
c.methodB()  # Calls method from Child
