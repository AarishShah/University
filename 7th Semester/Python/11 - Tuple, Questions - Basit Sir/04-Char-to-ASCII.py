# Convert letter to ASCII code

# using ord() function
for i in range(65, 91):
    print(chr(i), " = ", ord(chr(i)))

# using dictionary
dict = {}

for i in range(65, 91):
    dict[chr(i)] = i

print(dict)
