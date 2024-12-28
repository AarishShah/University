# There are five types of functions on the basis of arguments:
# 1. Function call with no arguments
# 2. Function call with fixed arguments
# 3. Function call with named arguments (keyword arguments)
# 4. Function call with default arguments
# 5. Function call with variable-length arguments


def msg():
    print("Welcome")


def opt(x, y):
    # print("{Sum}".format(Sum=x+y)) # This is another way of printing.
    print("Sum = {0}".format(x+y))
    print("Difference = {0}".format(x-y))



 # Example 1 of function with no arguments
msg()

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Example 2 of function with fixed arguments
 # This is called positional arguments. Position of arguments is important. 
opt(2, 4)# 6, -2. Here, 2 is assigned to x and 4 is assigned to y.
opt(4, 2)  # 6, 2. Here, 4 is assigned to x and 2 is assigned to y.

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Example 3 of function with named arguments (keyword arguments)
# This is called keyword arguments. Position of arguments is not important. 
opt(x=2, y=4)  # 6, -2. Here, 2 is assigned to x and 4 is assigned to y.
opt(y=4, x=2)  # 6, -2. Here, 2 is assigned to x and 4 is assigned to y.
