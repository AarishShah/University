// If the given number is prime or not. incomplete...

#include <stdio.h>

int Prime(int);

int main()

{
    int x, y;

    printf("Enter the integer\n");
    scanf("%d", &x);

    y = Prime(x);
    printf("%d", y);
}

// Prime Number Function

int Prime(int z)

// Equation for prime numbers. Two consecutive numbers which are natural numbers and prime numbers are 2 and 3. Apart from 2 and 3, every prime number can be written in the form of 6n + 1 or 6n – 1, where n is a natural number. Note: These both are the general formula to find the prime numbers.

{
    int n = 1;
    int a = (6 * n + 1);
    int b = (6 * n - 1);

    if (z == 2 || z == 3)
        return printf("is prime."); // Since it's true, we don't need to return it.
        //printf("is prime.");

    while ((a != z || b != z) && (n <= z))
    {
        n++;
    }
    if (a ==z || b == z)
        return printf("%d is prime.",z);

    else
        return printf("%d is not prime.",z);
}