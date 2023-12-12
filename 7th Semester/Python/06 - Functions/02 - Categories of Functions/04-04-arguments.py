# Example 3 of function with variable-length arguments
# to store values in a Dictionary instead of a list
def Sum(**Marks):
    print(Marks)

    for key, value in Marks.items():
        print(key, value)

Sum(English=90, Math=80, Science=95, History=100)

# Marks is a dictionary.
# Here, **Marks is a dictionary unpacking operator.

# .keys() Method: This is a method of a dictionary that returns a view object. This object contains the keys of the dictionary, as tuples. For the Marks dictionary mentioned above, Marks.keys() would yield something like ["Alice", "Bob"].

# .values() Method: This is a method of a dictionary that returns a view object. This object contains the values of the dictionary, as tuples. For the Marks dictionary mentioned above, Marks.values() would yield something like [90, 85].

# .items() Method: This is a method of a dictionary that returns a view object. This object contains the key-value pairs of the dictionary, as tuples. For the Marks dictionary mentioned above, Marks.items() would yield something like [("Alice", 90), ("Bob", 85)].

# In each iteration of the loop, key, value is a tuple unpacking syntax. The first element of the tuple (the key) is assigned to the variable key, and the second element of the tuple (the value) is assigned to the variable value.
# So, in each iteration of the loop, you get direct access to both the key and the value of the current key-value pair in the dictionary.