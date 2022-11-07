//Line 37?

// Use recursion to print the nth number of the Fibonacci series.

// Fibonacci series 0 1 1 2 3 5 8 13 21 34 ... (Sum of previous two numbers strating with 0 and 1).

#include <stdio.h>

int fib(int);

int main()

{

    int n, i;

    printf("Enter the value of n.\n");
    scanf("%d", &n);

    printf("The series is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
}

int fib(int n)

{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    else
        return fib(n - 1) + fib(n - 2); // https://youtu.be/4GMh0MfCiqE the following formula has been derived. I didn't make it. Check the flow chart.
}