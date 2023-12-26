# Tuple Unpacking

# Elite = ("A", "B", "C")
# 1, 2, 3 = Elite # Incorrect as 1, 2, 3 are not variables

Elite = (1, 2, 3)
a, b, c = Elite
print(Elite)  # (1, 2, 3) - tuple
print(a)  # 1 - int
print(b)  # 2 - int
print(c)  # 3 - int

# List Unpacking
Vitality = [7, 8, 9]
d, e, f = Vitality
print(Vitality)  # [7, 8, 9] - list
print(d)  # 7 - int
print(e)  # 8 - int
print(f)  # 9 - int