# Method Overloading

def Sum (dt, *args):
    if dt == 'int':
        answer = 0
    if dt == 'str':
        answer = ''

    for i in args:
        answer += i

    print(answer)

Sum('int', 1, 2, 3, 4, 5)
Sum('str', 'Hello', ' World', '!')

# This is not efficient