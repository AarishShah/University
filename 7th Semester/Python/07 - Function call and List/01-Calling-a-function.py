# Missed class on 29th November 2023.
# Notes on Notion: https://7thsemester.notion.site/Call-by-Value-and-Call-by-reference-Missed-Class-fd5794f3b2134362bf7a5c7a6d5e50db
# Call by Value
'''
Values are copied to the function
e.g opt(2,4)
it does not effect the Original Variable
'''

# Call by Reference
"""
Two types of data 
1) Mutable - Can be changed 
    List, Dictionary, Set
        For Mutable, Python uses call by reference
2) Immutable - Once defined it cant be changed
    int, float, tuple, String
        For immutable, Python uses call by Value
"""

# Example of Call by Value
def value():
    x = "Seven"
    print("Inside fxn: ", x)
    print("the id of x: ", id(x))

x = 60
value()
print("Outside fxn: ", x)
print("id of fxn: ", id(x))

# Example of Call by Reference (CBR)
marks = [10,30,50]

def CBR(Sage):
    Sage[0] = 40
CBR(marks)
print(marks)