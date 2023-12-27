# There are two typed of functions based on return type:
# 1. void functions
# 2. fruitful functions

# Example of void functions
def opt(a, b):
    print("{0} + {1} = {2}" .format(a, b, a+b)) # This is called string formatting. {0}, {1}, {2} are called placeholders.
    # print(f"{a} + {b} = {a+b}") # This is called f-string formatting. {a}, {b} are called placeholders.
    print("{1} + {0} = {2}" .format(a, b, a+b))
    print("{0} - {1} = {2}" .format(a, b, a-b))
    print("{1} - {0} = {2}" .format(a, b, b-a))

opt(100, 200)

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Example 1 of fruitful functions
import math

def area(radius):
    return math.pi * radius * radius

result = area(10)
print(result)

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Example 2 of fruitful function
def odd_even(num):
    if num % 2 == 0:
        return True
    else:
        return False
    
print(odd_even(10))
print(odd_even(11))

# Unreachable code (code after return statement), also called dead code, will not be executed.

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")