// Program to show exception handling using try-catch

import java.util.Scanner;

public class tryCatch
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

        // to show ArrayIndexOutOfBounds Exception or Arithmetic Exception.
        try
        {
            System.out.println("Value entered at index " + arr[i]);
            System.out.println("Ratio is: " + (arr[i] / d));

        } catch (Exception c)
        {
            System.out.println("Exception occured: " + c);
        }
        sc.close();

        System.out.println("\nSyed Aarish Shah | CSE-20-50");
    }
}