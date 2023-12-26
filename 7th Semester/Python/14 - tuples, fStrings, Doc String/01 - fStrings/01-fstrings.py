# fStrings are a new way to format strings in Python 3.6 and above.
# Literal for string interpolation (process of embedding or inserting values into a string)

# This is the old way of formatting strings
Letter = "Good Morning {}. Have a nice day {}."
P1 = "ABC"
P2 = "EFG"

print(Letter.format(P1, P2))
print(Letter.format(P2, P1))

# This is the new way of formatting strings
Letter = f"Good Morning {P1}. Have a nice day {P2}."
print(Letter)

# fStrings are faster than the old way of formatting strings because they are evaluated at compile time rather than at run time.
Z1 = 90
Z2 = 80
print(f"Marks of Person1 is {Z1} and marks of Person2 is {Z2}.")

Price = 3.045
txt = f"price is {Price:.2f} dollars"

print(f"{2*4}") # its type is string
