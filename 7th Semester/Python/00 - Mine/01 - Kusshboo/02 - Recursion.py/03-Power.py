def pow(n, p):
    if n == 0 or n == 1:
        return n
    elif p == 0:
        return 1
    elif p == 1:
        return n
    else:
        return n*pow(n, p-1)


print(pow(2, 4))
