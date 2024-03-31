s = "py"
i = iter(s)

while True:
    try:
        print(next(i))
    except StopIteration:
        print("Iteration has ended.")
        break
