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
        for name, marks in result_dictionary.items():
            print(f"Name: {name}, Marks: {marks}")

    elif choice == 3:
        break

    else:
        print("Wrong Choice")