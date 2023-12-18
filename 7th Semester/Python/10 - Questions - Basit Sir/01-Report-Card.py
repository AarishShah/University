# Write a program to enter name and marks in a dictionary and display the dictionary.

result_dictionary = {}

while True:
    print("\nMenu")
    print("1. Enter Details")
    print("2. Display Dictionary")
    print("3. Exit")

    choice = int(input("\nEnter your choice: "))

    if choice == 1:
        name = input("\nEnter name: ")
        marks = float(input("Enter marks: "))
        result_dictionary[name] = marks 

    elif choice == 2:
        print("\nStudent Information:")
        for x, y in result_dictionary.items():
            print(f"Name: {x}, Marks: {y}")

    elif choice == 3:
        break

    else:
        print("Wrong Choice")

'''
The program understands that 'x' represents the key, and 'y' represents the value because of the way result_dictionary.items()
The items() method of a dictionary returns a view of the dictionary's key-value pairs as tuples

In each iteration, the for loop unpacks the tuple into the variables x and y, so x is assigned the key, and y is assigned the value

'''