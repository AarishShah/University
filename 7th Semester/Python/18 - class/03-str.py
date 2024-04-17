###3
# __str__ method: it controls what should be returned when the class object is represented as a string

class student:
    def __init__ (self, name, roll):
        self.name = name
        self.roll = roll

s1 = student ("Neon" , 19)
print(s1) # gives the memory location of the object

class student:
    def __init__ (self, name, roll):
        self.name = name
        self.roll = roll

    def __str__(agent):
        return f"{agent.name} {agent.roll}"

s1 = student ("Neon" , 19)
print(s1) # will give the name and roll number because of __str__ method