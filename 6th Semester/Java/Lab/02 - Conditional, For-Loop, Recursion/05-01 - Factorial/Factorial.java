
// Write a program to calculate Factorial of a number n : 1*2*3*4*5*6 = 720
import java.util.Scanner;

public class Factorial
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number to find the factorial: ");
        int n = sc.nextInt();

        int fact = 1;

        for (int i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        System.out.println(fact);

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();
    }
}