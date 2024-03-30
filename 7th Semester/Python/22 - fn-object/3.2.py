# Method Overloading

class cal_area:
    def area(self, x):
        return 4 * x * x
    
    def area(self, l, b, h):
        return 2(l*b + b*h + h*l)
    
c = cal_area()
c.area(2,3,4)
c.area(2) # TypeError: area() missing 2 required positional arguments: 'b' and 'h'