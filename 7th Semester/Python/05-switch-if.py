# Program to demonstrate switch case with if conditions

print("Enter a number: ")
a = int(input())

match a:
    case 1:
        print("a is 1")
        print("execute more code") # Breaks are not needed in Python. It will automatically "break" after the case is executed.
    case 2:
        print("a is 2")
        print("execute more code")
    case _ if (a > 2 and a < 6):
        print("a is between 3 and 5")
        print("execute more code")
    case _ if (a > 5 and a < 11):
        print("a is between 6 and 10")
        print("execute more code")
    case _: # Default case
        print("a is not 1 to 10")
        print("execute more code")