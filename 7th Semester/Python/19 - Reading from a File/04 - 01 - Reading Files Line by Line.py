# line by line read

file = open("try.txt", "r")
while True:
    t = file.readline()
    print(t)
    if not t:
        break
file.close()
