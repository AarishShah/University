// Write a program to print Floid's Triangle

import java.util.Scanner;

public class FloidTriangle
{

    public static void main(String[] args)
    {
        int number = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                System.out.print(number + " ");
                number++;
            }
            System.out.print("\n");
        }

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();

    }
}
