# Exception Handling
# The process of anticipating as well as handling errors that may occur during the execution of a program

#  try-except block

'''

try:
    # code that may cause an error
except:
    # code that executes if an error occurs in the try block

'''

a = input("Enter a number: ")
print(f"Mutiplication table of {a} is:")

try:
    for i in range(11):
        print(f"{int(a)} x {i} = {int(a) * i}")
except:
    print("Invalid input")

print("Program executed successfully")
