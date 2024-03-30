def greet(fn):
    def fn1():
        print("Welcome to IUST Services")
        fn()
        print("Thank you for using IUST Services")
    return fn1 # no () here

def IUST():
    print("7th Sem CSE")

# IUST()
greet(IUST)()