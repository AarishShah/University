# Method that return a boolean value
# better output in next file

str1 = "Trust no one!"
str2 = "Trustnoone"
str3 = "123"
str4 = "123a"
str5 = "   "
str6 = "Trust No One!"
str7 = "eat the Food!"

print(str1.endswith("!!"))
print(str1.startswith("T"))

print(str1.find("no")) # returns the index of the first occurrence of the substring or -1 if not found
print(str1.index("n")) # returns the index of the first occurrence of the substring or raises an exception if not found

print(str1.isalnum()) # returns True if all characters in the string are alphanumeric (either alphabets or numbers) and there is at least one character, False otherwise
print(str2.isalnum())

print(str1.islower()) # returns True if all characters in the string are lowercase and there is at least one character, False otherwise
print(str3.islower())
print(str4.islower())

print(str1.isspace()) # returns True if all characters in the string are whitespaces and there is at least one character, False otherwise
print(str5.isspace())

print(str1.istitle()) # returns True if the string is a titlecased string and there is at least one character, False otherwise
print(str6.istitle())
print(str7.title())

print(str6.swapcase()) # returns a copy of the string with uppercase characters converted to lowercase and vice versa
