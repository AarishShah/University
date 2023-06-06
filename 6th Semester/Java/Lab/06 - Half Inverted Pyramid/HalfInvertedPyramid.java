// Wrrite a program to print Half Inverted Pyramid of Stars

import java.util.Scanner;

public class HalfInvertedPyramid
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();

    }
}
