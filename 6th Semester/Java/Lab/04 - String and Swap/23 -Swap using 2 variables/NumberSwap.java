// swap two numbers without using a third variable

public class NumberSwap
{
    public static void main(String[] args)
    {
        int a = 5;
        int b = 10;

        System.out.println("Before swapping: a = " + a + ", b = " + b);

        // Swap the numbers without using a third variable
        a = a + b;
        b = a - b;
        a = a - b;

        System.out.println("After swapping: a = " + a + ", b = " + b);

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}
