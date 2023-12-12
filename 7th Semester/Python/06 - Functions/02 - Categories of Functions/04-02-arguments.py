# Example of function with default arguments
def opt(x=1, y=4, z=6):
    sum = x + y + z
    print(sum)
    return

opt()  # 11             - 1 is assigned to x, 4 is assigned to y and 6 is assigned to z.
opt(2)  # 12            - 2 is assigned to x and y and z are assigned default values.
opt(2, 9)  # 17         - 2 is assigned to x and 9 is assigned to y and z is assigned default value.
opt(2, 9, 10)  # 21     - 2 is assigned to x, 9 is assigned to y and 10 is assigned to z.

# Non-default argument follows default argument
# def opt(x=1, y, z=6): # SyntaxError: parameter without a default follows parameter with a default
# assign default values from right to left