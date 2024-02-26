###2
# self parameter is a refrence to the current instance of the class and is used to access variables that belong to the class
class student:
    def __init__ (self, name, roll):
        self.name = name
        self.roll = roll

    def greet(agent): # agent is a reference to the current instance of the class
        print ("Hello", agent.name)

s1 = student ("Sage" , 7)
s1.greet()