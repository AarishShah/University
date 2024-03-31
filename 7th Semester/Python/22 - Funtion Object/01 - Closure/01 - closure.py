# closure in pyhton

def outer (x):
    def inner (y):
        return x + y
    return inner

o = outer(7)
print(o) # <function outer.<locals>.inner at 0x7f3e3c3e3d08>
z = o(3)
print(z) # 10


# The important thing to note here is that inner can access x, the parameter of its enclosing function outer. This is a closure in action: inner "remembers" the environment it was created in (i.e., it retains access to variables from its enclosing scope).

# The outer function is called with x set to 7.
# This call returns the inner function, which is still capable of accessing the value of x (which is now 7), even though outer has finished execution. This returned function is stored in the variable o.
# At this point, o is essentially the inner function, but with x permanently set to 7.

# Calling o(3):
# Now, o is called with an argument 3. Remember, o is actually the inner function returned by outer, with x remembered as 7.
# Inside o (or inner), the argument 3 is treated as y, and the function returns the sum of x and y, which is 7 + 3 = 10