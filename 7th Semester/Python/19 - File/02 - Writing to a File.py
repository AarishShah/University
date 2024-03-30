file = open ("try.txt", "w")
# This next line will result in an error as the file is opened in write mode and cannot be read from
# t = file.read()
t = file.write("Welcome")
print(t)
file.close()