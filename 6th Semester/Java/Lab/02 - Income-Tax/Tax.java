// Write a progrma that will calculate tax to be paid by an employee aa per the following rules:
/*
Income Range		        Tax Rate
< 2,50,000			        0%
2,50,000 - 5,00,000		    5%
5,00,000 - 10,00,000		20%
> 10,00,000			        30%
*/

import java.util.Scanner;

class Tax
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your income: ");
        double income = sc.nextDouble(); // to take input from the user

        double tax = 0;

        if (income <= 250000)
        {
            tax = 0;
        }

        else if (income > 250000 && income <= 500000) // 5% of the amount exceeding 250000
        {
            tax += 0.05 * (income - 250000);
        }

        else if (income > 500000 && income <= 1000000) // 20% of the amount exceeding 500000
        {
            tax += 0.05 * (income - 250000);
            tax += 0.2 * (income - 500000);
        }

        else // 30% of the amount exceeding 1000000
        {
            tax += 0.05 * (income - 250000);
            tax += 0.2 * (income - 500000);
            tax += 0.3 * (income - 1000000);
        }
        System.out.println("Tax to be paid: " + tax);

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close(); // to close the scanner, to prevent memory leak
    }
}