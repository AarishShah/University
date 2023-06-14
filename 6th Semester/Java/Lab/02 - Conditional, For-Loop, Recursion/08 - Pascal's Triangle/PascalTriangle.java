// Write a program to print Pascal's Triangle

import java.util.Scanner;

public class PascalTriangle
{

   public static void main(String[] args)
   {
      int coef = 1;
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter the number of rows: ");
      int rows = sc.nextInt();

      for (int i = 0; i < rows; i++)
      {
         for (int space = 1; space <= rows - i; space++)
            System.out.print("  ");
         for (int j = 0; j <= i; j++)
         {
            if (j == 0 || i == 0)
               coef = 1;
            else
               coef = coef * (i - j + 1) / j;
            // System.out.printf("%4d", coef); // ask sir
            System.out.print("    " + coef); // Sir's answer

         }
         System.out.print("\n");
      }

      System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

      sc.close();

   }
}