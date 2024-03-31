# None

# but at least one arguemnt should be present
def sum (a = None, b = None):
    if a != None and b == None:
        print(a)
    else:
        print(a+b)
    
z = sum(2,3)
print(z)