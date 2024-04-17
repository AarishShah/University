# Using filter
# filter creates a list of elements for which a function returns true.
# arguments: function, list
def filter_fn(x):
    return x > 4

L = [3, 4, 5, 7, 3, 8]
L2 = list(filter(filter_fn, L))
print(L2)
