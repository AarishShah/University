class Parent
{
    int x;

    public Parent(int x)
    {
        this.x = x;
    }

    public void display()
    {
        System.out.println("Parent: " + x);
    }
}

class Child extends Parent
{
    int y;

    public Child(int x, int y)
    {
        super(x); // Calling the constructor of the parent class using the 'super' keyword
        this.y = y;
    }

    public void display()
    {
        super.display(); // Calling the display() method of the parent class using the 'super' keyword
        System.out.println("Child: " + y);
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Child c = new Child(10, 20);
        c.display(); // without super only child's display() method will be called

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}
