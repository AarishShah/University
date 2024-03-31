# Decorators

# A decorator is a function that takes another function as an argument and returns a new function that modifies the behavior of the original function. The new function is often referred to as decorator function.

'''

def outer_function(msg):
    def inner_function():
        print("Behavior before the original function")
        msg()
        print("Behavior after the original function")
    return inner_function

'''

def greet(fn):
    def fn1(*args, **kwargs):
        print("Welcome to IUST Services")
        fn(*args, **kwargs)
        print("Thank you for using IUST Services")
    return fn1 # no () here

@greet  
def IUST():
    print("7th Sem CSE")

@greet
def mul(x,y):
    print(x*y)

IUST()
mul(3,4) # Welcome to IUST Services

# greet(mul)(3,4) # another way to call the function
