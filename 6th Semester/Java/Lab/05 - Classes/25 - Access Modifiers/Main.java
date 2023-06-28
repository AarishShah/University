// Program to demonstrate the use of access modifiers
// Access modifiers are keywords in Java that are used to set accessibility (visibility) of classes, interfaces, methods, and fields.
// Details on copy constructor: https://www.geeksforgeeks.org/copy-constructor-in-java/

class access
{
    public int a = 1;
    protected int b = 2;
    int c = 3; // default
    private int d = 4;
}

class Main extends access
{
    public static void main(String[] args)
    {
        access z = new access();
        System.out.println(z.a); // public
        System.out.println(z.b); // protected
        System.out.println(z.c); // default
        // System.out.println(d.d); // private (error: The field access.d is not visible)

        System.out.println("\nSyed Aarish Shah | CSE-20-50");

    }
}