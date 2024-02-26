# using loop

file = open("try.txt", "r")

for line in file:
    print(line)

file.close() # close the file that has been opened. else data is stored in buffer which is not good.