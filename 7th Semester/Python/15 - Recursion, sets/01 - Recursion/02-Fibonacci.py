# Generate fibonacci series using recursion

def fib(n):
    if (n == 0) or (n == 1):
        return n
    return fib(n - 1) + fib(n - 2)


for i in range(6):
    print(fib(i))
