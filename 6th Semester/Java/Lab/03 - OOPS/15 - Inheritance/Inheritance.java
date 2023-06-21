// Inheritance
// Abdul Bari's Cpp
// • It is a process of acquiring features of an existing class into a new class
// • It is used for achieving reusability
// • features of base class will be available in derived class

class Base
{
    public int a;

    public void display()
    {
        System.out.println("Display of Base " + a);
    }
}

class Derived extends Base
{
    public void show()
    {
        System.out.println("Show of Derived " + a);
    }
}

public class Inheritance
{
    public static void main(String[] args)
    {
        Derived d = new Derived();
        d.a = 100;
        d.display();
        d.show();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}