// Program to demonstrate interface in java

interface InterfaceClass // interface is a collection of abstract methods and static constants
{
    void fx1();

    void fx2();

    void fx3();
}

class derived implements InterfaceClass
{
    public void fx1()
    {
        System.out.println("hi i am overridden fxn1");
    }

    public void fx2()
    {
        System.out.println("hi i am overridden fxn2");
    }

    public void fx3()
    {
        System.out.println("hi i am overridden fxn3");
    }
}

class Main
{
    public static void main(String[] args)
    {

        derived d = new derived();
        d.fx1();
        d.fx2();
        d.fx3();

        // InterfaceClass i = new interfaceClass(); // interface cannot be instantiated

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}