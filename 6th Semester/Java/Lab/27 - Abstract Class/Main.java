// Program to demonstrate Abstract Class

abstract class absClass
{
    void fn1()
    {
        System.out.println("hello");
    }

    void fn2()
    {
        System.out.println("welcome");
    }

    abstract void fn3();
}

class derived extends absClass
{
    void fn3()
    {
        System.out.println("Hi I am overridden fn - fn3()");
    }
}

class Main
{
    public static void main(String[] args)
    {
        derived d = new derived();
        d.fn3();

        // absClass a = new absClass(); // error: absClass is abstract; cannot be instantiated

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}