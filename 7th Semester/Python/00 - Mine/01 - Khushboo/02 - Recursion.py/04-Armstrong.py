def is_armstrong(x):
    x_str = str(x)
    x_len = len(x_str)

    total = sum(int(i)**x_len for i in x_str)

    return total == x

print(is_armstrong(153))