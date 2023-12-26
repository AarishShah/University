# Tuple is ordered colledction of data items
# Tuple is immutable

A = (1, 2, 3, 4, 5, 6, 7, 8, 9)
print(A)
print(type(A))

B = (3)
print(B)
print(type(B))

C = (3,)
print(C)
print(type(C))

# A[2] = 7
# print(A) # Error: TypeError: 'tuple' object does not support item assignment

# Tuple cn be used in setting port no and ip address as they are fixed
# Tuple is faster than list since it is ordered and immutable

Sdetails = ("ABC", 1, "EFG", 9)
print(Sdetails[0])

if 9 in Sdetails:
    print("Yes")

# tuple[start:stop:step]
# tuple[start:end:jump value]

D = A[1:5:2]
print(D)