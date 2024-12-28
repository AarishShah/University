# Program to demonstrate nested if statement

# a = 10
a = 8
# a = 6

if (a > 5):
    print("1st Statement of first 'if'.")
    if (a > 7):  # 2nd Statement of first 'if'
        print("2nd Statement of first 'if' & 1st Statement of second (nested) 'if'.")
        if (a > 9):  # 2nd Statement of second 'if'
            print("1st Statement of third (nested) 'if'.")
            print("2nd Statement of third (nested) 'if'.")
        print("3rd statement of second (nested) if")
    print("3rd Statement of first 'if'")

print("This statement is independent of the 'if' conditions")

'''
if (a > 5):
    print("1st Statement of first 'if'.")

if (a > 7):
    print("2nd Statement of first 'if' & 1st Statement of second 'if'.")

if (a > 9):
    print("1st Statement of third 'if'.")
    print("2nd Statement of third 'if'.")

if (a > 7):
    print("3rd statement of second 'if'")

if (a > 5):
    print("3rd Statement of first 'if'")

print("This statement is independent of the 'if' conditions")
'''