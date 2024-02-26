# classes in python are used to create new user defined data structures
# class is a blueprint for the objects
# class is a collection of variables and methods

# Example 1
class student:
    def __init__ (self, name, roll):
        self.name = name
        self.roll = roll

s1 = student ("Khushboo" , 1)
print(s1.name)
print(s1.roll)

# In Python, the constructor method for a class must be named __init__ (with double underscores before and after init) to be recognized as the special method that initializes a new instance of the class.

# s1 = student ("Khushboo" , 01) # SyntaxError: leading zeros in decimal integer literals are not permitted;