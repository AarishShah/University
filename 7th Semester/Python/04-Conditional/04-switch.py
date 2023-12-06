# Program to demonstrate switch case

print("Enter a number: ")
a = int(input())

# a = int(input("Enter a number: "))

match a:
    case 1:
        print("a is 1")
        print("execute more code") # Breaks are not needed in Python. It will automatically "break" after the case is executed.
    case 2:
        print("a is 2")
        print("execute more code")
    case 3:
        print("a is 3")
        print("execute more code")
    case 4:
        print("a is 4")
        print("execute more code")
    case 5:
        print("a is 5")
        print("execute more code")
    case _: # Default case
        print("a is not 1,2,3,4 or 5")
        print("execute more code")