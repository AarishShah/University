# Program to demonstrate Strings

# String is a sequence of characters
# String is immutable
# String is ordered (indexing and slicing)

str1 = "Seventh"
str = 'Hi'

print(type(str1))
print(str1)

# Indexing
print(str1[2])
print(str1[5])
# print(str1[7]) # IndexError: string index out of range
print(str1[-1]) # Negative indexing, starts from -1 to -n
print(str1[-7])
# print(str1[-8]) # IndexError: string index out of range

print(str)