'''
3. Simple Calculator with String Input
Write a Python program that:

Accepts a mathematical operation as a string input in the format operand1 operator operand2 (e.g., 10 + 20).
Parses the string to extract the operands and the operator.
Performs the corresponding operation using conditional statements and prints the result.
Handles errors gracefully if the input is invalid (e.g., division by zero or invalid format).
Use a dictionary to store operator-function mappings for efficiency.
'''
def values(string):
    operators = ['+', '-', '*', '/']
    for o in operators:
        index = string.find(o)
        if index == -1:
            continue
        
        num1 = int(string[:index])
        num2 = int(string[index+1:])
        if (index != -1):
            return [o, num1, num2]


# equation = input("Enter equation: ")
equation = "2/0"

hi = values(equation)

if (hi[0] == "+"):
    print(hi[1] + hi[2])

elif (hi[0] == "-"):
    print(hi[1] - hi[2])

elif (hi[0] == "*"):
    print(hi[1] * hi[2])

elif (hi[0] == "/"):
    print(hi[1] / hi[2])
    
else:
    print("Failed to read the equation!")

