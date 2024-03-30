# Global variable
counter = 0

def increment_counter():
    global counter  # Declare that we want to use the global variable
    counter += 1  # Increment the global variable

def print_counter():
    # We can access the global variable here without declaring it global,
    # because we're just reading its value, not modifying it.
    print("Counter value:", counter)

# Main code
print_counter()  # Initially, this will print 0
increment_counter()  # Increment the counter
print_counter()  # Now, this will print 1
increment_counter()  # Increment the counter again
print_counter()  # Now, this will print 2
