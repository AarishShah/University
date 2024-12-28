# Example 1 of function with variable-length arguments

def var(*x):
    print(x)
    print("No of argument(s):" , (len(x)))
    print("Value of x is:", x)
    print("Value of *x is:", *x)
    print(type(x))
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    return


var()  # () <class 'tuple'>
var(1)  # (1,) <class 'tuple'> - To make it clear that it's a tuple with a single element, a comma is added after the element. So, a single-element tuple containing 1 is written as (1,).
var(1, 2)  # (1, 2) <class 'tuple'>

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# Example 2 of function with variable-length arguments
def Sum(*x):
    sum = 0
    for i in x:
        sum = sum + i
    print(sum)
    return

Sum()  # 0
Sum(1)  # 1
Sum(1, 2)  # 3
Sum(1, 2, 3)  # 6
Sum(1, 2, 3, 4)  # 10

# x is a tuple.
# *x is a tuple unpacking operator.
