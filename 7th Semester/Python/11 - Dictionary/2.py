# Print Letters from ASCII Value using dictionary
# Converts ASCII value to character

print("Print Letters from ASCII Value using dictionary")

d = {}
for i in range(65, 65+26):
    d[i] = chr(i) # right side is value and left side is key

print(d)