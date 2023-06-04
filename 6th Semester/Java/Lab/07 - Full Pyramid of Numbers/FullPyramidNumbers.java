// Write a program to print Full Pyramid of Numbers

import java.util.Scanner;

public class FullPyramidNumbers
{

    public static void main(String[] args)
    {
        int k = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();

        for (int i = 1; i <= rows; i++, k = 0)
        {
            for (int space = 1; space <= rows - i; space++)
            {
                System.out.print("  ");
            }
            while (k != 2 * i - 1)
            {
                System.out.print("* ");
                k++;
            }
            System.out.print("\n");
        }

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();

    }
}