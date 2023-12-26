def fibo(x):
    a = 0
    b = 1
    s = 0

    for _ in range(x):  # This is a common convention in Python when you don't need the value of the loop variable
        s = s + a
        a, b = b, a + b
    print(s)


for i in range(6):
    fibo(i)
