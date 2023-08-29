// Program to handle specific exceptions using try catch block (ArrayIndexOutOfBoundsException and ArithmeticException).

import java.util.Scanner;

public class SpecificExceptions
{
    public static void main(String[] args)
    {
        int arr[] = new int[3];
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter index no: ");
        int i = sc.nextInt();

        System.out.print("Enter Divisor: ");
        int d = sc.nextInt();

        try
        {
            System.out.println("Value entered at index " + arr[i]);
        } catch (ArrayIndexOutOfBoundsException b)
        {
            System.out.println("Error was caused due to ArrayIndexOutOfBoundsException: " + b);

        }

        try
        {
            System.out.println("Ratio is: " + (arr[i] / d));
        } catch (ArithmeticException e)
        {
            System.out.println("Error was caused due to ArithmeticException: " + e);
        }

        sc.close();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}