// Write a program to print Fibonacci Series of n terms, where n is input by user : 0 1 1 2 3 5 8 13 24 .....

import java.util.Scanner;

public class Factorial
{
    static public int rec(int n)
    {
        if (n == 1 || n == 0)
        {
            return 1;
        }
        return (n * rec(n - 1));
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer to find it's factorial: ");
        int a = sc.nextInt();

        System.out.print(rec(a));

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();
    }
}