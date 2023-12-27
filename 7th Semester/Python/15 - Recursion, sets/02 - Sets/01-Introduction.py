# Sets
# Unordered collection of unique elements
# Unique - No duplicates
# Set is mutable. We can add or remove items from it.
# Set is unchangable. We cannot change its items, but we can add or remove items from it.

A = {"ABC", 9, 3.5, True, False}
print(A)

B = {1,3,4,2}
print(B) # {1, 2, 3, 4} - unordered

C = {}
print(type(C)) # <class 'dict'>

D = set()
print(type(D)) # <class 'set'> - empty set

# A[0] = "Hi" 
# print(A) # unchangable - TypeError: 'set' object does not support item assignment

S1 = {1,2,3,4,5}
S2 = {4,5,6,7,8}

# print(S1.union(S2)) # {1, 2, 3, 4, 5, 6, 7, 8} - union
# S1.update(S2)
# print(S1) # Union of S1 and S2, then S1 is updated
# print(S1.update(S2)) # None - union - None because it is a method and it does not return anything

# print(S1.intersection(S2)) # {4, 5} - intersection
# S1.intersection_update(S2)
# print(S2) # Intersection of S1 and S2, then S2 is updated

# print(S1 | S2) # {1, 2, 3, 4, 5, 6, 7, 8} - union
# print(S1 & S2) # {4, 5} - intersection
# print(S1 - S2) # {1, 2, 3} - difference

S3 = S1.symmetric_difference(S2) # {1, 2, 3, 6, 7, 8} - symmetric difference. Symmetric difference is the elements that are not common in both sets
print(S3) # {1, 2, 3, 6, 7, 8} - symmetric difference
