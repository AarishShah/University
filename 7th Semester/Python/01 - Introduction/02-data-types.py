# Data types

'''
Python has the following data types built-in by default, in these categories:

Text Type:	str
Numeric Types:	int, float, complex
Sequence Types:	list, tuple, range
Mapping Type:	dict
Set Types:	set, frozenset
Boolean Type:	bool
Binary Types:	bytes, bytearray, memoryview
None Type:	NoneType
'''

# Text Type: str
text = "Hello, World!"
print(text, type(text))  # str: sequence of Unicode characters, used for text data.

# Numeric Types: int, float, complex
number = 42  # int: represents whole numbers without decimals.
decimal = 3.14159  # float: represents real numbers with a decimal point.
complex_number = 1 + 2j  # complex: represents numbers with a real and imaginary part.
print(number, type(number))  # int example
print(decimal, type(decimal))  # float example
print(complex_number, type(complex_number))  # complex example

# Sequence Types: list, tuple, range
my_list = [1, 2, 3]  # list: mutable sequence, typically for homogeneous items.
my_tuple = (1, 2, 3)  # tuple: immutable sequence, contents cannot be changed.
my_range = range(1, 4)  # range: immutable sequence of numbers for looping.
print(my_list, type(my_list))  # list example
print(my_tuple, type(my_tuple))  # tuple example
print(my_range, type(my_range))  # range example

# Mapping Type: dict
my_dict = {"name": "Alice", "age": 25}  # dict: collection of key-value pairs.
print(my_dict, type(my_dict))  # dict example

# Set Types: set, frozenset
my_set = {1, 2, 3}  # set: mutable collection of unique elements.
my_frozenset = frozenset([1, 2, 3])  # frozenset: immutable version of a set.
print(my_set, type(my_set))  # set example
print(my_frozenset, type(my_frozenset))  # frozenset example

# Boolean Type: bool
my_bool = True  # bool: can hold True or False, used in conditional statements.
print(my_bool, type(my_bool))  # bool example

# Binary Types: bytes, bytearray, memoryview
my_bytes = b"Hello"  # bytes: immutable sequence of bytes (8-bit integers).
my_bytearray = bytearray(my_bytes)  # bytearray: mutable sequence of bytes.
my_memoryview = memoryview(my_bytes)  # memoryview: memory view object of byte buffer.
print(my_bytes, type(my_bytes))  # bytes example
print(my_bytearray, type(my_bytearray))  # bytearray example
print(my_memoryview, type(my_memoryview))  # memoryview example

# None Type: NoneType
my_none = None  # NoneType: represents absence of a value, e.g., null or no value.
print(my_none, type(my_none))  # NoneType example
