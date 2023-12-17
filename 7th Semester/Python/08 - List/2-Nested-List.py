# Nested list

# Nested Lists - Lists can contain other lists, useful for matrices or complex structures.
# to access the nested list, use the index operator []. For example:
# nested_list = ["Happy", [2, 0, 1, 5]]
# print(nested_list[0][1]) # would output 'a'

A = [1, 2, 3, [4, 5, 6, 7], 8, 9]
print(A)
print(A[1])
print(A[3])
print(A[3][2])

B = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print(B)
print(B[1])

C = [[1, 2, 3], [[4, 5, 6], [7, 8, 9]]]
print(C)
print(C[1])
print(C[1][0])
print(C[1][0][1])
