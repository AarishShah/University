# Access Modifiers

# Public, Protected, Private

# Public: Accessible from anywhere
# Protected: Accessible within the class and its subclasses
# Private: Accessible within the class only

# Public: No underscore
class Person:
    def __init__(self, age, name):
        self.age = age
        self.name = name

P = Person(80, "Asif")
print(P.name) # Asif
print(P.age) # 80
# Above values can be modified from anywhere

# Private: Double underscore
class Person:
    def __init__(self, age, name):
        self.__age = age
        self.__name = name

P = Person(1, "Khushi")
# print(P.__name) # AttributeError: 'Person' object has no attribute '__name'
print(P._Person__name) # Name Mangling - it means it is not private, it is just name mangling
print(P.__dir__())

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
print(s2._name) # Khushboo
print(s2._greet()) # 7th Sem CSE

