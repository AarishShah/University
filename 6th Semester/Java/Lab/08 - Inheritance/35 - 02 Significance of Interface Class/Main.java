// Program to demonstrate the significance of interface class
// Interface class is used to achieve runtime polymorphism. It is used to achieve loose coupling.
// Loose coupling is a design pattern which helps to reduce the dependency between the classes.
// This happens when many programmers are working on the same project and they have to implement the same method in different ways

interface Shape
{
    double calculateArea();
}

class Circle implements Shape
{
    private double radius;

    public Circle(double radius)
    {
        this.radius = radius;
    }

    @Override
    public double calculateArea()
    {
        return Math.PI * radius * radius;
    }
}

class Rectangle implements Shape
{
    private double length;
    private double width;

    public Rectangle(double length, double width)
    {
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateArea()
    {
        return length * width;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Shape s1 = new Circle(5.0);
        double circleArea = s1.calculateArea();
        System.out.println("Area of the circle: " + circleArea);

        Shape s2 = new Rectangle(4.0, 6.0);
        double rectangleArea = s2.calculateArea();
        System.out.println("Area of the rectangle: " + rectangleArea);

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}
