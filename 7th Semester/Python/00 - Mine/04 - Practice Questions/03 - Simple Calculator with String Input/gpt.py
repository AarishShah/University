# Solution to Question 3: Simple Calculator with String Input
def simple_calculator():
    while True:
        try:
            operation = input("Enter a mathematical operation (or 'exit' to quit): ").strip()
            if operation.lower() == 'exit':
                print("Exiting calculator. Goodbye!")
                break

            # Split the input into operands and operator
            parts = operation.split()
            if len(parts) != 3:
                raise ValueError("Invalid input format. Please use the format: operand1 operator operand2")

            operand1 = float(parts[0])
            operator = parts[1]
            operand2 = float(parts[2])

            # Perform the operation
            if operator == '+':
                result = operand1 + operand2
            elif operator == '-':
                result = operand1 - operand2
            elif operator == '*':
                result = operand1 * operand2
            elif operator == '/':
                if operand2 == 0:
                    raise ZeroDivisionError("Division by zero is not allowed.")
                result = operand1 / operand2
            else:
                raise ValueError("Unsupported operator. Please use one of: +, -, *, /")

            print(f"Result: {result}")

        except ValueError as ve:
            print(f"Error: {ve}")
        except ZeroDivisionError as zde:
            print(f"Error: {zde}")

simple_calculator()