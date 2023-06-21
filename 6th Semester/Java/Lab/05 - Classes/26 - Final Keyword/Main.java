// Program to show the use of final keyword in java

// The final keyword is a non-access modifier used for classes, attributes and methods, which makes them non-changeable (impossible to inherit or override).
// The final keyword is useful when you want a variable to always store the same value, like PI (3.14159...).

class base
{
    final void fn()
    {
        System.out.println("hello");
    }
}

class derived extends base
{

    // void fn() // error: fn() in derived cannot override fn() in base
    // {
    // System.out.println("welcome");
    // }

}

class Main
{
    public static void main(String[] args)
    {
        base b = new base();
        b.fn();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}