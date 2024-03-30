# split - split the string into a list
# arguments: split(seperator, maxsplit)
# e.g "I am a student".split(" ", 2) will give ["I", "am", "a student"]

file = open("try.txt", "r")
t = file.read()
print(t.split("#", 2))
file.close()
