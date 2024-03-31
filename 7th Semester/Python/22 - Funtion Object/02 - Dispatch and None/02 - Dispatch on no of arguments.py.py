from multipledispatch import dispatch

class CalArea:
    @dispatch(int)  # or (float,) if you want to include floats
    def area(self, x):
        return 4 * x * x

    @dispatch(int, int, int)  # or (float, float, float)
    def area(self, l, b, h):
        return 2 * (l*b + b*h + h*l)

c = CalArea()
print(c.area(2))  # For a square
print(c.area(2, 3, 4))  # For a three-dimensional object
