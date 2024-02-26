# Example 1
class student:
    def __init__ (self, name, roll):
        self.name = name
        self.roll = roll

s1 = student ("Sage" , 7)
print(s1.name , s1.roll)

# to change the name and roll number
s1.name = "Khushboo"
s1.roll = 1
print(s1.name , s1.roll)

del s1.roll # we can delete the roll number like this
# print(s1.name , s1.roll) # it will give an error because we have deleted the roll number. AttributeError: 'student' object has no attribute 'roll'

del s1 # we can delete the object like this
# print(s1) # it will give an error because we have deleted the object. name 's1' is not defined