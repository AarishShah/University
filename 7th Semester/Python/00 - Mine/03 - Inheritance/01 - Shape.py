# Create a class named Shape and it' subclasses Circle and Rectangle.
# Override the area method of the Shape class in the Circle and Rectangle classes.

class Shape:
    def area(self):
        print("The area is: ")

    def perimeter(self):
        print("The perimeter is: ")


class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        super().area()
        print(self.length * self.width)

    def perimeter(self):
        super().perimeter()
        print(2 * (self.length + self.width))

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        super().area()
        print(3.14 * self.radius * self.radius)

    def perimeter(self):
        super().perimeter()
        print(2 * 3.14 * self.radius )


s = Shape()
s.area()
s.perimeter()

rc = Rectangle(2,3)
rc.area()
rc.perimeter()

c = Circle(4)
c.area()
c.perimeter()