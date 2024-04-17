def square(x):
    return x * x

# Using map
# map applies a function to all items in an input list.
L = [3, 4, 5, 7, 3, 8]
L1 = list(map(square, L))
print(L1)

# higher order function - function that takes another function as argument