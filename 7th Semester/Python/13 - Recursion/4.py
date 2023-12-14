S1 = {1, 2, 3, 4, 5}
S2 = {4, 5, 6, 7, 8}

S3 = S1.difference(S2) # {1, 2, 3} - difference
print(S3) # {1, 2, 3} - difference

# is disjoint
print(S1.isdisjoint(S2)) # False - is disjoint - if no common elements, then True, else False

# is superset
print(S1.issuperset(S2)) # False - is superset - if S1 is superset of S2, then True, else False

# is subset
print(S1.issubset(S2)) # False - is subset - if S1 is subset of S2, then True, else False

S1.add(8)
print(S1) # {1, 2, 3, 4, 5, 8} - add element to set

S1.remove(8)
print(S1) # {1, 2, 3, 4, 5} - remove element from set

S1.remove(8) # KeyError: 8 - remove element from set

print(S1.discard(8)) # {1, 2, 3, 4, 5} - discard element from set

# pop
print(S1.pop()) # 1 - pop element from set

# clear
S1.clear()
print(S1) # set() - clear set