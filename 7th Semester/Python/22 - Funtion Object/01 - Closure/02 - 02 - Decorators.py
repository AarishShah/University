# Decorators

def greet(fn):
    def fn1():
        print("Welcome to IUST Services")
        fn()
        print("Thank you for using IUST Services")
    return fn1 # no () here

@greet  
def IUST():
    print("7th Sem CSE")

IUST()

# By writing @greet before the function IUST, we are telling the Python interpreter to call the greet function with IUST as an argument and then assign the returned value to IUST. This is equivalent to writing IUST = greet(IUST).

# IUST() == greet(IUST)() # True  
