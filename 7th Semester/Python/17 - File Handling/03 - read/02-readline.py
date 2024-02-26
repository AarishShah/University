# Example 3: Read the file line by line.
file = open("try.txt", "r")
print(file.readline())
print(file.readline()) # this is print second line and not same line twice as the pointer is moved to the next line after the first readline.
print(file.readline())
print(file.readline())
print(file.readline()) 
print(file.readline()) # will print empty string as there is no more line to read.
print(file.readline()) # will print empty string as there is no more line to read.