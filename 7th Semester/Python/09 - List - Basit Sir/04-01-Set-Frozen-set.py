# Set
# Set is a collection type that is unordered and unindexed. In Python, sets are written with curly brackets.
# Empty curly brackets will not make an empty set, it will make an empty dictionary. To make an empty set, we use the set() function.
# Set items are unordered, unchangeable, and do not allow duplicate values.
# Set items can be of any data type which is immutable.
# Set items are unique.
# Set is mutable. We can add or remove items from it.
# Set is unchangable. We cannot change its items, but we can add or remove items from it. Read below

my_set = {1, 2, 3}
print(my_set)
print(type(my_set))

# Frozen Set
# Frozen set is just an immutable version of a Python set object.
# While elements of a set can be modified at any time, elements of the frozen set remain the same after creation.
# Due to this, frozen sets can be used as keys in Dictionary or as elements of another set.

fs = frozenset(my_set)
print(fs)
print(type(fs))


# Unchangeable here refers to the individual items in the set. Once an item is added to the set, it cannot be modified.
# Items in a set must be immutable data types, such as numbers, strings, or tuples (not lists or dictionaries).
# If you want to "change" an item, you need to remove the old one and add the new item.