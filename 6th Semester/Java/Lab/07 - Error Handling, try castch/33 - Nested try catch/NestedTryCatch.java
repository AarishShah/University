// Program to show nested try catch

import java.util.Scanner;

public class NestedTryCatch
{
    public static void main(String[] args)
    {
        int[] arr = new int[3];
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
            try
            {
                System.out.println("Value entered at index " + arr[i]);
                System.out.println("Ratio is: " + (arr[i] / d));
                
            } catch (ArithmeticException e)
            {
                System.out.println("Error was caused due to ArithmeticException: " + e);

            } catch (ArrayIndexOutOfBoundsException b)
            {
                System.out.println("Error was caused due to ArrayIndexOutOfBoundsException: " + b);
            }
        } catch (Exception c)
        {
            System.out.println("Exception other than Arithmetic and ArrayIndexOutOfBounds: " + c);
        }
        sc.close();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}