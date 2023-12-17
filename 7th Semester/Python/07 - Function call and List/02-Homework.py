# Homework
# take a list [-2, -1, 0, 1, 2], square each number, and then arrange them in ascending order, all in a single step.

# Solution
numbers = [-2, -1, 0, 1, 2]
numbers.sort(key=lambda x: x**2)
print(numbers)

# above lambda function is same as below function
# def key(x): return x**2
