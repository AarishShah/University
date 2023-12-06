# Print Letters from ASCII Value using dictionary

print("Print Letters from ASCII Value using dictionary")

d = {}
for i in range(65, 65+26):
    d[i] = chr(i) # right side is key and left side is value

print(d)