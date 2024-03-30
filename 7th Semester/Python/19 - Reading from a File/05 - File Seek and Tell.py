###
# welcome to IUST
# seek and tell
# seek will move the cursor to the given position
# tell will tell the current position of the cursor
with open("try.txt", "r") as f:
    f.seek(8)
    t = f.read()
    print(t)
    print(f.tell())