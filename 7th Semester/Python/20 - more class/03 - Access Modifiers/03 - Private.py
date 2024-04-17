# Private: Double underscore

class Person:
    def __init__(self, age, name):
        self.__age = age
        self.__name = name

P = Person(1, "Khushi")

# print(P.__name) # will not work, as it is private
print(P._Person__name) # Name Mangling - name of the class is added as prefix to the variable name; Notion: https://7thsemester.notion.site/Name-Mangling-27e9fd6d7f0e4646b9d8b942042e8a48?pvs=4

print(P.__dir__())