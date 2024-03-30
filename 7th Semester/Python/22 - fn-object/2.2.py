# Decorators

def greet(fn):
    def fn1(*args, **kwargs):
        print("Welcome to IUST Services")
        fn()
        print("Thank you for using IUST Services")
    return fn1 # no () here

@greet  
def IUST():
    print("7th Sem CSE")

def mul(x,y):
    print(x*y)

IUST()
# greet(mul)(3,4) # TypeError: fn1() takes 0 positional arguments but 2 were given
mul(3,4) # Welcome to IUST Services

# A decorator is a function that takes another function as an argument and returns a new function that modifies the behavior of the original function. The new function is often referred to as decorator function.
# Syntax:
# @decorator_function
# def function_name():
#     pass
