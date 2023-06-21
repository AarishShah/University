import java.util.Scanner;

public class DivideByZero
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        int a = sc.nextInt();
        System.out.println("Enter the number");
        int b = sc.nextInt();

        // System.out.println("The result is " + a / b); // if b = 0 then it will throw an exception (Exception in thread "main" java.lang.ArithmeticException: / by zero)
        try
        {
            int c = a / b;
            System.out.println("The remainder is " + c);
        } catch (ArithmeticException e)
        {
            System.out.println("The result is infinity");
        }
        sc.close();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}