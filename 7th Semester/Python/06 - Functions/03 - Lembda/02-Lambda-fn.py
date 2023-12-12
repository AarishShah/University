import math

# normal function
# def distance (x1,y1,x2,y2) :
#     return math.sqrt((x1-x2)**2 + (y1-y2)**2)
#
# print ( distance(0,0,3,4))

# lambda function
distance = lambda x1,y1 , x2,y2 : math.sqrt ((x1-x2)**2 + (y1-y2)**2)

print ( distance(0,0,3,4))