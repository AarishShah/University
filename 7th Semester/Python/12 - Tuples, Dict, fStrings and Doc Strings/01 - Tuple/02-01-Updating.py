# To modify a tuple, you have to convert it to a list first then convert it back to a tuple.
#  This can be done by typecasting.

A = (1, 2, 3, 4, 5, 6, 7, 8, 9)
print(A)
print(type(A))

# Convert to list
B = list(A)
print(B)
print(type(B))

# Convert back to tuple
C = tuple(B)
print(C)
print(type(C))