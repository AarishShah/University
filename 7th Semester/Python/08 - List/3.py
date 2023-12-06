# Write a program to design a stack using list

A = []
while True:
    print('1. Push')
    print('2. Pop')
    print('3. Display')
    print('4. Exit')

    choice = int(input('Enter your choice: '))
    
    if choice == 1:
        element = int(input('Enter element: '))
        A.append(element)

    elif choice == 2:
        if len(A) == 0:
            print('Stack is empty')
        else:
            print('Popped element is', A.pop())

    elif choice == 3:
        print(A)

    elif choice == 4:
        break

    else:
        print('Wrong choice')
