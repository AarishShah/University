# Doc strngs are used to document the code

import math

def Area(r):
    '''Take radius as input and returns area of circle as output'''
    return (math.pi*r*r)

Area(5)
print(Area.__doc__)