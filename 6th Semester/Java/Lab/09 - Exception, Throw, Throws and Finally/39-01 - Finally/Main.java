// Program to demonstrate the finally block

public class Main
{
    public static void main(String[] args)
    {
        try
        {
            int a = 10;
            int b = 0;
            int c = a / b;
            System.out.println(c);
        } catch (Exception e)
        {
            System.out.println(e);
            // Additional code that handles the exception
        } finally
        {
            System.out.println("Finally block is always executed");
            // Ususally used to close resources, e.g. database connections. Even if an exception occurs, the finally block will be executed and the database connection will be closed.
        }
        // Code after the try-catch-finally block
        System.out.println("Program continues after try-catch-finally");

        System.out.println("\nSyed Aarish Shah | CSE=20-50");
    }
}
