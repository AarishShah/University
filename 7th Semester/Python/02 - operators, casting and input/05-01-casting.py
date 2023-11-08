# Implicit Type Casting
# Python automatically converts one data type to another (if it makes sense)

num_int = 6       # This is an integer
num_float = 1.2   # This is a float

# Python will implicitly convert the integer to a float for this addition
result = num_int + num_float

print("Implicit Type Casting:")
print(f"Type of num_int: {type(num_int)}")
print(f"Type of num_float: {type(num_float)}")
print(f"Value of result: {result} (Type: {type(result)})")  # The result is a float

print("\n-----------------------\n")

# Explicit Type Casting
# Here, the programmer converts the data type of an object to required data type

num_str = "456"   # This is a string

# Explicitly convert the string to an integer (if possible)
num_int_cast = int(num_str)

print("Explicit Type Casting:")
print(f"Type of num_str before casting: {type(num_str)}")
print(f"Value of num_str: {num_str}")
print(f"Type of num_int_cast: {type(num_int_cast)}")
print(f"Value of num_int_cast: {num_int_cast}")

# Trying to convert a string to an integer when it does not represent an integer
# will result in a ValueError. Uncommenting the following lines will raise an error.
# invalid_str = "abc"
# print(int(invalid_str))  # This will raise ValueError
