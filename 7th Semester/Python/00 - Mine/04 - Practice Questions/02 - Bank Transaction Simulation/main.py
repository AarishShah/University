'''
2. Bank Transaction Simulation
Create a Python program that:

Asks the user to enter an initial balance.
Provides options to deposit, withdraw, or check the balance.
Use a loop to repeat these operations until the user chooses to exit.
Validate the input for correct data types and ensure that the withdrawal amount does not exceed the current balance.
Use functions to perform each operation.

'''

Balance = 0

while (True):


    print('''Select an option:
          1 - Deposit
          2 - Withdraw
          3 - Check Balance
          4 - Exit          
          ''')
    option = int(input())
    
    match option:
        case 1:
            deposit = int(input('Enter the amount you want to deposit:'))
            
            if (deposit < 0):
                print("Enter positive value!")
            else:
                Balance = Balance + deposit
                print(f"New balance is: {Balance}")

        case 2:
            withdraw = int(input('Enter the amount you want to withdraw: '))

            if (withdraw > Balance):
                print("Insufficient balance!")
                print(f"No amount was deducted. Your balance is: {Balance}")
            else:
                Balance = Balance - withdraw
                print(f"New balance is: {Balance}")
           
        case 3:
                print(f"Your balance is: {Balance}")

        case 4:
            print('Exiting...')
            exit()

        case _:
            print('Exiting...')
            exit()
