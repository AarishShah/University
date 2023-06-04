import java.util.Scanner;

class Fibonacci
{
    static public int fib(int x)
    {
        if ((x == 1) || (x == 0))
        {
            return (x);
        } else
        {
            return (fib(x - 1) + fib(x - 2));
        }
    }

    public static void main(String[] args)
    {

        int i = 0;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms to be displayed: ");
        int a = sc.nextInt();

        while (i < a)
        {
            System.out.print(fib(i) + " ");
            i++;
        }

        System.out.println("\n\nSyed Aarish Shah | CSE-20-50");

        sc.close();

    }
}