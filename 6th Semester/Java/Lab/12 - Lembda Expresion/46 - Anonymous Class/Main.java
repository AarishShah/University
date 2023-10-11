// A program to demonstrate the use of anonymous class
// Anonymous class is a class without name, it is used to override the methods of interface or class, it is defined and instantiated in a single statement.

interface inter
{
    public void fn1();

    public void fn2();
}

class Base implements inter
{
    public void greet()
    {
        System.out.println("Welcome");
    }

    @Override
    public void fn1()
    {
        System.out.println("fn1() of Base");
    }

    @Override
    public void fn2()
    {
        System.out.println("fn2() of Base");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Base b = new Base();
        b.fn1();
        b.greet();
        b.fn2();

        System.out.println();

        inter i = new Base();
        i.fn1();
        i.fn2();

        System.out.println();
        inter z = new Base()
        {
            @Override
            public void fn1()
            {
                System.out.println("fn1() of Anonymous Class");
            }

            @Override
            public void fn2()
            {
                System.out.println("fn2() of Anonymous Class");
            }
        };
        z.fn1();
        z.fn2();

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
    }

}
