# Python Program to Demonstrate String Methods

str1 = "  Hello, World! Welcome to Python programming.  "

print("Upper:", str1.upper()) # upper: Converts all characters in the string to uppercase


print("Lower:", str1.lower()) # lower: Converts all characters in the string to lowercase

print("Strip:", str1.strip()) # strip: Removes any leading (spaces at the beginning) and trailing (spaces at the end) characters (space is the default leading character to remove)

print("Replace 'World' with 'Everyone':", str1.replace("World", "Everyone")) # replace: Replaces a substring in the string

# split: Splits the string at the specified separator (defaults to space) and returns a list
print("Split at spaces:", str1.split()) # space would not be there in the output

print("Capitalize:", str1.capitalize()) # capitalize: Converts the first character to upper case and the rest to lower case

# center: Centers the string, padding it with spaces. Read the comment at the end of the program
print("Center with width 50:", str1.center(50))
print(len(str1.center(50)))
print(len(str1.center(2)))

print("Count occurrences of 'o':", str1.count('o')) # count: Returns the number of times a specified value occurs in a string



'''
The center method in Python is used to center-align a string within a specified width by padding it with spaces (or any other specified character) on both sides. In your code snippet, str1.center(50) centers the string str1 within a width of 50 characters.

The len function in Python returns the length of a string, which is the number of characters it contains.

So, print(len(str1.center(50))) will print the length of the string after it has been centered within a 50-character wide field. It's important to note that the length will be exactly 50 characters, as center ensures that the original string is exactly in the middle of this 50-character field, padding with spaces on both sides as necessary.

If the original string is longer than the specified width in center, no padding is added, and the length of the resulting string will be the same as the length of the original string. In your case, since the width specified is 50, and assuming str1 is shorter than 50 characters, the length printed will be 50.
'''