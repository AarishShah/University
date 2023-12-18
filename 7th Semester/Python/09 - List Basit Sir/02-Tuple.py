# How to update tuple since it is immutable?
# tuple to list, update list, convert back to tuple

tuple1 = (1, 2, 3)
print(tuple1)

list1 = list(tuple1)
list1.append(4)
tuple1 = tuple(list1)

print(tuple1)

tuple1 = tuple1 + (5, 6)
print(tuple1)