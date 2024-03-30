
# Overloading - is a type of polymorphism that adds additional functionalities for the existing propertie of objects. Objects can be methods, operators, or properties.

# Method overloading

#  it has two types:
# 1. Varying datatypes off parameters
# 2. Varying number of arguments

# the module 'multi_dispatch' is used to implement method overloading in python.

# @dispatch(data_type, data_type, ...)
# def function_name(n1, n2, ...):

from multi_dispatch import dispatch

class opt:
    @dispatch(int)
    def fn(x):
        print("Integer function")

    @dispatch(float)
    def fn(x):
        print("Float function")

o = opt()
o.fn(2)
o.fn(2.0)