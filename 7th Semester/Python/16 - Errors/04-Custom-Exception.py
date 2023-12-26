# Raising Custom Exceptions
# Custom exceptions are used to create our own exceptions and raise that exception when a certain condition is met.

a = int(input("Enter any roll number between 1 and 70: "))

if (a <1 or a > 70):
    raise ValueError("Value should be between 1 and 70")