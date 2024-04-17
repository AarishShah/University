# Example 4 of function with variable-length arguments
def greet(**name):
    print("Hello", name["firstname"], name["middlename"], name["lastname"])


greet(firstname="Syed", middlename="Aarish", lastname="Shah")

# name is a dictionary.
# keys are firstname, middlename, lastname.
# values are Syed, Aarish, Shah.
# name["firstname"] is the value of the key firstname, which is Syed.

# Dictionary would look like this:
# name = {
#     "firstname": "Syed",
#     "middlename": "Aarish",
#     "lastname": "Shah"
# }