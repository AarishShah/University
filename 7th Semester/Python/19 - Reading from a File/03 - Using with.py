with open("try.txt", "r") as file:
    t = file.read()
    print(t)
    # we don't have to close the file, as the with statement will take care of it

# the above code is same as the following code
file = open("try.txt", "r")
t = file.read()
print(t)
file.close()