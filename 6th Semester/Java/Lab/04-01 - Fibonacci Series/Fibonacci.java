
// Write a program to print Fibonacci Series of n terms, where n is input by user : 0 1 1 2 3 5 8 13 24 .....
import java.util.Scanner;

public class Fibonacci
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms to be displayed: ");
        int n = sc.nextInt();

        int t1 = 0, t2 = 1;
        int nextTerm = 0;

        for (int i = 1; i <= n-1; i++)
        {
            if (i == 1)
            {
                System.out.print(t1 + " ");
            }

            if (i == 2)
            {
                System.out.print(t2 + " ");
            }

            else
            {
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;

                System.out.print(nextTerm + " ");
            }
        }

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();
    }
}