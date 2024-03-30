f = open("try.txt", "r")
i = 0
while True:
    i = i + 1
    t = f.readline()
    if not t:
        break
    L1 = t.split(",")[0]
    L2 = t.split(",")[1]
    L3 = t.split(",")[2]
    print(f" First value of line {i} is {L1}")
    print(f" Second value of line {i} is {L2}")
    print(f" Third value of line {i} is {L3}")

    type(L1)  # str
    # before using L1, L2, L3, convert them to int or float or appropriate type
    # L1*12 will give L1 12 times, not the multiplication: 12 * 12
    # int(L1)*12 will give the multiplication
f.close()