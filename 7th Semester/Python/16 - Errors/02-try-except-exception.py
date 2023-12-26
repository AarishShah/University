a = input("Enter a number: ")
print(f"Mutiplication table of {a} is:")

try:
    for i in range(11):
        print(f"{int(a)} x {i} = {int(a) * i}")
except Exception as e:
    print(e)
    print("Invalid input")

print("Program executed successfully")