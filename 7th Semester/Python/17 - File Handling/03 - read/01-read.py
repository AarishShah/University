# read - read the file that has been opened.
# readline - read the file line by line.

# Example 1: Read the file that has been opened.
file = open("try.txt", "r")
print(file.read()) # read the entire file that has been opened.

# Example 2: Read the first 5 characters of the file that has been opened.
file = open("try.txt", "r")
print(file.read(5)) # read the first 5 characters of the file that has been opened.