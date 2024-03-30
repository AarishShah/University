# Protected: Single underscore

class Person:
    def __init__(self):
        self._name = "Khushboo"
    
    def _greet(self):
        return "7th Sem CSE"
    
class Student(Person):
    pass

s1 = Person()
s2 = Student()

print(s1._name) # Khushboo
print(s1._greet()) # 7th Sem CSE

# Protected members can be accessed by the derived class
print(s2._name) # Khushboo
print(s2._greet()) # 7th Sem CSE
