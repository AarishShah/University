# Dictionary is a collection which is unordered and changeable. No duplicate members.

# 1. Key-Value Pairs:
#    - Dictionaries are collections of key-value pairs.
#    - Each key must be unique within a dictionary.
#    - Keys are usually strings or numbers, but they can be any immutable type.

# 2. Creation:
#    - Dictionaries are created using curly braces {}.
#    - Key-value pairs are separated by colons (:), and pairs are separated by commas.

# 3. Accessing Values:
#    - Values in a dictionary are accessed using square brackets [] with the key.
#    - Example: my_dict['key'].

# 4. Mutable:
#    - Dictionaries are mutable, meaning you can add, update, or remove key-value pairs.
#    - Example: my_dict['new_key'] = 'new_value'.

# 5. No Indexing:
#    - Dictionaries are unordered collections, and unlike lists, they do not support indexing.
#    - Accessing elements is done by their keys.

# 6. Nested Dictionaries:
#    - Dictionaries can contain other dictionaries, creating nested structures.
#    - Example: nested_dict = {'key': {'nested_key': 'nested_value'}}.

# 7. Dictionary Comprehension:
#     - Similar to list comprehensions, Python allows dictionary comprehensions for concise creation of dictionaries.
#     - Example: {key: value for key, value in iterable}.

# 8. Immutability of Keys:
#     - Keys in a dictionary must be immutable, meaning they cannot be changed after creation.

# Dictionary uses hash maps internally. Hash maps are used to store key-value pairs. Hash maps are also called hash tables, hash sets, or dictionaries.
# Time complexity of hash maps: O(1) - constant time
# Thus, time complexity of dictionaries: O(1) - constant time

dict1 = {
    1: "Khushboo",
    22: "Hidayat",
    62: "Haamid",
    62: "Aarish"
}

print(dict1)

print(dict1.keys())
print(dict1.values())
print(dict1.items())

dict1[1] = "Khushi"
print(dict1)