str1 = "Trust no one!"
str2 = "Trustnoone"
str3 = "123"
str4 = "123a"
str5 = "   "
str6 = "Trust No One!"
str7 = "Eat the Food!"

# Checking end and start of the string
print(f"Does '{str1}' end with '!!'? {str1.endswith('!!')}")
print(f"Does '{str1}' start with 'T'? {str1.startswith('T')}\n")

# Finding and indexing substrings
print(f"First occurrence of 'no' in '{str1}': {str1.find('no')}")
print(f"First occurrence of 'n' in '{str1}': {str1.index('n')}\n")

# Checking if the string is alphanumeric
print(f"Is '{str1}' alphanumeric? {str1.isalnum()}")
print(f"Is '{str2}' alphanumeric? {str2.isalnum()}\n")

# Checking if all characters in the string are lowercase
print(f"Are all characters in '{str1}' lowercase? {str1.islower()}")
print(f"Are all characters in '{str3}' lowercase? {str3.islower()}")
print(f"Are all characters in '{str4}' lowercase? {str4.islower()}\n")

# Checking if all characters in the string are whitespaces
print(f"Are all characters in '{str1}' whitespaces? {str1.isspace()}")
print(f"Are all characters in '{str5}' whitespaces? {str5.isspace()}\n")

# Checking if the string is titlecased
print(f"Is '{str1}' a titlecased string? {str1.istitle()}")
print(f"Is '{str6}' a titlecased string? {str6.istitle()}")
print(f"Titlecased version of '{str7}': {str7.title()}\n")

# Swapping case of the string
print(f"Swapcase of '{str6}': {str6.swapcase()}\n")
