// Program to demonstrate Multiple Inheritance using Interfaces
// Done in class

interface ABC
{
    void fn1();
}

interface EFG extends ABC // Interface EFG extends interface ABC. It also implements the method of interface ABC.
{
    void fn2();
}

interface HIJ
{
    void fn3(int a);
}

class Big implements EFG, HIJ // Multiple Inheritance. Class Big implements both interfaces EFG and HIJ. It also implements the methods of interface ABC as it extends interface EFG.

{
    public void fn1()
    {
        System.out.println("fn1");
    }

    public void fn2()
    {
        System.out.println("fn2");
    }

    public void fn3(int a)
    {
        System.out.println("fn3");
    }

}

class Main
{
    public static void main(String[] args)
    {
        Big b = new Big();
        b.fn1();
        b.fn2();
        b.fn3(1);

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}