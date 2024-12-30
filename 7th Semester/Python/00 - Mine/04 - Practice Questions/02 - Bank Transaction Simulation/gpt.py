# Solution to Question 2: Bank Transaction Simulation
def bank_transaction_simulation():
    balance = 0

    def deposit(amount):
        nonlocal balance
        balance += amount
        print(f"Deposited: {amount}. New balance: {balance}")

    def withdraw(amount):
        nonlocal balance
        if amount > balance:
            print("Insufficient funds.")
        else:
            balance -= amount
            print(f"Withdrawn: {amount}. New balance: {balance}")

    def check_balance():
        print(f"Current balance: {balance}")

    while True:
        print("\nChoose an option:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Exit")

        try:
            choice = int(input("Enter your choice: "))
            if choice == 1:
                amount = float(input("Enter amount to deposit: "))
                deposit(amount)
            elif choice == 2:
                amount = float(input("Enter amount to withdraw: "))
                withdraw(amount)
            elif choice == 3:
                check_balance()
            elif choice == 4:
                print("Exiting. Thank you!")
                break
            else:
                print("Invalid choice. Please try again.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

bank_transaction_simulation()