// A program to demonstrate the use of functional interface
// A class with only one abstract method is called functional interface.

interface inter
{
    public void fn1();
}

class Base implements inter
{
    @Override
    public void fn1()
    {
        System.out.println("fn1() of Base");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        inter i = new Base();
        i.fn1();

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
    }
}