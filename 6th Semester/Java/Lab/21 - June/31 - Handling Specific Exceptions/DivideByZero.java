// Program to demonstrate exception handling using if-else

import java.util.Scanner;

public class DivideByZero
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the dividend:");
        int dividend = sc.nextInt();
        System.out.println("Enter the divisor:");
        int divisor = sc.nextInt();

        if (divisor == 0)
        {
            System.out.println("Error: Division by zero is not allowed.");
        } else
        {
            int quotient = dividend / divisor;
            System.out.println("Quotient: " + quotient);
        }

        sc.close();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}
