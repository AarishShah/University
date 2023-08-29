// Program to demonstrate the use of throws keyword

public class Main
{
    // public static int divide(int a, int b) //  in this case, error is thrown without declaring it in the method signature

    public static int divide(int a, int b) throws ArithmeticException // in this case, the exception is explicitly declared in the method signature
    {
        if (b == 0)
        {
            throw new ArithmeticException("Cannot divide by zero");
        }

        int result = a / b;
        return result;
    }

    public static void main(String[] args)
    {
        try
        {
            int c = divide(6, 0);
            System.out.println(c);
        } catch (ArithmeticException e)
        {
            System.out.println("Error: " + e.getMessage());
        }
        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}