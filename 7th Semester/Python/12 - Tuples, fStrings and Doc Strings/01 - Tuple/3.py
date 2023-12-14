Roll = (1, 2, 3, 4, 5, 6)
print(Roll)
print(type(Roll))

Enrolled = list(Roll)
print(Enrolled)
print(type(Enrolled))

Enrolled.append(7)
Enrolled.pop()
Enrolled[1] = 8

Roll = tuple(Enrolled)
print(Roll)
print(type(Roll))