# Loops in python are used to execute the same block of code again and again, as long as a certain condition is met.

# There are two types of loops: Entry Controlled Loops and Exit Controlled Loops.
# Entry Controlled Loops: In entry controlled loops, the condition is checked before entering the loop body. For example, for loop, while loop.
# Exit Controlled Loops: In exit controlled loops, the condition is checked after executing the loop body. For example, do-while loop.

# Python has two primitive loop commands: while loops and for loops.

# we use for loop when we know the number of iterations
# we use while loop when we don't know the number of iterations but we know the terminating condition
# we use do-while loop when we want to execute the loop body at least once e.g. menu driven programs, to know the choice of the user

# The For Loop
str1 = "I drew her sad face!"

for i in range(10):
    print(str1[i])

# The While Loop
a = 0
while(a<3):
    a=a+1

print(f"Value of a: {a}")