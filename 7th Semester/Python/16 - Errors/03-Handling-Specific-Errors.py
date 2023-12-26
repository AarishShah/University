# Handling Specific Errors

try:
    num = int (input("Enter a number: "))
    a = [1,2]
    print(a[num])
except ValueError:
    print("Value entered in not an Integer") # When the user enters a string instead of a number
except IndexError:
    print("Index Error") # When the user enters a number greater than the length of the list

print("Program executed successfully") # This line will be executed even if an error occurs