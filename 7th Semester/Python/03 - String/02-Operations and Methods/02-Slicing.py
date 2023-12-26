# Program to demonstrate String operations: Slicing

# Slicing
# Syntax: [start:stop:step]
# start: Starting index
# stop: Ending index
# will print between start and stop, including start & excluding stop

str1 = "Seventh"
str2 = "Semester"

# Slicing (start:stop)
print("str1[1:5]:", str1[1:5])  # Output: 'even'
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Slicing, stop is not specified means till the end
print("str1[2:]:", str1[2:])  # Output: 'venth'
print("str1[2:200]:", str1[2:200])  # No error, will print till the end. Output: 'venth'
# Slicing, start is not specified means from the beginning
print("str1[:5]:", str1[:5])  # Output: 'Seven'
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Negative indexing
# Slicing, negative indexing. Will print from -4 to -1
print("str1[-4:-1]:", str1[-4:-1])  # Output: 'ent' # Same as above. Length of (string - 4) to length of (string - 1)
print("str1[len(str1) -4 :len(str1) -1]:", str1[len(str1) - 4:len(str1) - 1])  # Output: 'ent' # will not print anything, because -0 is same as 0
print("str1[-4:-0]:", str1[-4:-0])  # Output: '' # will not print anything, because -4 is greater than 0. Will throw error in Pycharm
print("str1[-4:0]:", str1[-4:0])  # Output: ''
print("type(str1[-4:0]):", type(str1[-4:0]))  # Output: <class 'str'>
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

print("str1[-4:]:", str1[-4:])  # Slicing, negative indexing. Will print from -4 to the end. Output: 'enth'
print("str1[:-1]:", str1[:-1]) # Slicing, negative indexing. Will print from the beginning to the end excluding the last character. Output: 'Sevent'

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
print("str1[-1:]:", str1[-1:])  # Slicing, negative indexing. Will print from -1 to the end. Output: 'h'
print("str1[-1:-1]:", str1[-1:-1])  # will not print anything. Output: ''
print("str1[-10:]:", str1[-10:])  # Will print from the beginning to the end. Output: 'Seventh'
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Slicing with step, not done in class
print("str1[1:5:2]:", str1[1:5:2])  # Will print from 1 to 4, step is 2. Output: 'ee'
print("str1[::-1]:", str1[::-1])  # Will print the string in reverse order. step is -1. Output: 'htneveS'
print("str1[::2]:", str1[::2])  # Will print only alternate characters. step is 2. Output: 'Svnh'
print("str1[::3]:", str1[::3])  # Will print only alternate characters. step is 3. Output: 'Snh'
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

print("str1[1:len(str1)]:", str1[1:len(str1)])  # Will print from 1 to the end. Output: 'eventh'
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
