# List

A = [2, 1, 5, 4]
print(A)

A.append(8)
print(A)

A.sort()
print(A)

'''
A.append(A)
print(A)
'''

A.sort(reverse=True)
print(A)

print(A.index(5))

A.reverse()
print(A)

C = A
C[0] = 100
print(A) # A is changed because C is a reference to A

D = A.copy()
D[0] = 200
print(A) # A is not changed because D is a copy of A

A.insert(0, 300) # insert 300 at index 0
print(A)

E = [100, 200, 300]
E.extend(A)
print(E)

F = A + E # same as A.extend(E)
print(F)

E = A + E
print(E)

A.clear()
print(A)

A = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(A.pop()) # remove last element and returns the removed element

A.remove(5) # remove the first occurence of 5
print(A)

del A[0] # remove element at index 0
print(A)

del A
# print(A) # NameError: name 'A' is not defined because A is deleted