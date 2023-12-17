# List - A list is a data structure for storing a sequence of values. The values stored in a list are called items or elements. Lists are similar to strings, which are ordered collections of characters, except that the elements of a list can be of any type. Lists and strings — and other things that behave like ordered collections — are called iterables.

# 1. Mutable Data Type - Lists in Python are mutable, meaning the elements can be changed after creation.
# 2. Ordered Collection - Lists are ordered, and the order of elements is preserved.

# 3. Allow Duplicates - Lists can have multiple items with the same value.
# 4. Indexing and Slicing - Elements can be accessed by index. Lists support slicing for accessing a range of elements.

# 5. Heterogeneous Elements - Lists can contain elements of different data types, including other lists.
# 6. Dynamic Size - Lists can grow or shrink in size (using append, insert, remove, etc.).

# 7. Nested Lists - Lists can contain other lists, useful for matrices or complex structures.
# 8. List Comprehensions - Provide a concise way to create lists with an expression inside brackets.

# 9. Iterability - Lists are iterable, allowing looping over each element.
# 10. Built-in Functions and Methods - Python provides functions like len(list) and methods like list.sort().
# 11. Variable Length Arguments - Lists can be used to pass variable-length arguments (*args) in functions.


A = [2, 1, 5, 4]
print(A) # [2, 1, 5, 4]

A.append(8)
print(A) # [2, 1, 5, 4, 8]

A.sort()
print(A) # [1, 2, 4, 5, 8]


# A.append(A)
# print(A) # [1, 2, 4, 5, 8, [...]]


A.sort(reverse=True)
print(A) # [8, 5, 4, 2, 1]

print(A.index(5)) # 1

A.reverse()
print(A) # [1, 2, 4, 5, 8]

C = A # C is a reference to A
C[0] = 100
print(A) # [100, 2, 4, 5, 8] - A changed because C is a reference to A. C is not a copy of A. Altering C will alter A.

D = A.copy()
D[0] = 200
print(A) # [100, 2, 4, 5, 8] - A is not changed because D is a copy of A

A.insert(0, 300) # insert 300 at index 0
print(A) # [300, 100, 2, 4, 5, 8]

E = [100, 200, 300]
E.extend(A) # same as E + A
print(E) # [100, 200, 300, 300, 100, 2, 4, 5, 8]

F = A + E # same as A.extend(E)
print(F) # [300, 100, 2, 4, 5, 8, 100, 200, 300, 300, 100, 2, 4, 5, 8]

E = A + E
print(E) # [300, 100, 2, 4, 5, 8, 100, 200, 300, 300, 100, 2, 4, 5, 8]

A.clear()
print(A) # []

A = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(A.pop()) # 9 - remove last element and returns the removed element

A.remove(5) # remove the first occurence of 5
print(A) # [1, 2, 3, 4, 6, 7, 8]

del A[0] # remove element at index 0
print(A) # [2, 3, 4, 6, 7, 8]

del A # delete the list, not just the elements in the list but the list itself
# print(A) # NameError: name 'A' is not defined because A is deleted