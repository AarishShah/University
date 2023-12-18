# List - Basit Sir
list1 = []
print(type(list1))

list2 = list()
print(type(list2))

list1 = input("1 - Enter a list: ")
print(list1)
print(type(list1)) # string, not list

list10 = list(input("2 - Enter a list: "))
print(list10)
print(type(list10)) # list of characters

list1 = eval(input("3 - Enter a list: "))  # User input is evaluated as a Python expression
print(list1)  # Prints the evaluated input
print(type(list1)) # Prints the type of the evaluated input

# The output type depends on the input:
# - If input is '[1, 2, 3]', type will be <class 'list'>
# - If input is '(1, 2, 3)', type will be <class 'tuple'>
# - If input is '5', type will be <class 'int'>
# - If input is '"hello"', type will be <class 'str'>
# ... and so on for other valid Python expressions.


# user can enter any valid Python expression as input
# it will get casted to the appropriate type