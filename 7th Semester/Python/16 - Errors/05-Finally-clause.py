# Finally clause
# This block of code will be executed no matter what happens in the try and except blocks.

def fn():
    try:
        a = [1, 7, 9, 10]
        index = int(input("Enter an index: "))
        print(a[index])
        return 1
    except:
        print("Error")
        return 0
    finally:
        print("The code in finally always gets executed")


x = fn()
print(f"Return value of the function: {x}")
