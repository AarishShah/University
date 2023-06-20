// Program to demonstrate interface in java

interface InterfaceClass // interface is a collection of abstract methods and static constants
{
    void fn1();

    void fn2();

    void fn3();
}

class derived implements InterfaceClass
{
    public void fn1()
    {
        System.out.println("hi i am overridden fnn1");
    }

    public void fn2()
    {
        System.out.println("hi i am overridden fnn2");
    }

    public void fn3()
    {
        System.out.println("hi i am overridden fnn3");
    }
}

class Main
{
    public static void main(String[] args)
    {

        derived d = new derived();
        d.fn1();
        d.fn2();
        d.fn3();

        // InterfaceClass i = new interfaceClass(); // interface cannot be instantiated

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}