# Write a program to print vowels present in a given string

string = input("Enter a string: ")
vowels = "aeiouAEIOU"

# using sets
set_string = set(string)  # convert string to set
print("Vowels present in the string are: ", set_string.intersection(vowels))

'''
+-----------------------+
|                       |
|    String: ABCDEFG    |
|                       |
+------------+----------+
             |
   +-----------------+
   |                 |
   | Vowels: AEIOU   |
   |                 |
   +-----------------+
             |
   +------------------+
   |                  |
   | Intersection: AE |
   |                  |
   +------------------+

Intersection gives us the common elements between two sets.

'''
