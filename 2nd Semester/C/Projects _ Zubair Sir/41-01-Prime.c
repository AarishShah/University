#include <stdio.h>

int main()

{
    int n, half = 0, i, flag = 0;

    printf("Enter a number");
    scanf("%d", &n);

    if (n <=1) //  = (Assignment) and == (Equal to). "=="" compares value of left and side expressions.
    {
        printf("%d is not prime.", n);
        flag = 2;
    }

    half = n / 2;

    for (i = 2; i <= half; i++)
    {
        if (n % i == 0) // if given number, n is completely divisible by any number between 1 to n/2, then it's not a prime number.
        {
            printf("%d is not prime.", n);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is prime.", n);
}