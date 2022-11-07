#include <stdio.h>

int Prime(int);

int main()

{
    int n, half = 0, i, flag = 0, y;

    printf("Enter a number");
    scanf("%d", &n);
    y = Prime(n);
    
    if (y == 0)
    printf("%d is prime.", n);

     if (y == 1)
    printf("%d is not prime.", n);

}

// Prime Function
int Prime(int z)

{
    int half = 0, i, flag = 0;

        if (z <=1)
    {
        printf("%d is not prime.", z);
        flag = 2;
    }

    half = z / 2;

    for (i = 2; i <= half; i++)
    {
        if (z % i == 0) // if given number, n is completely divisible by any number between 1 to n/2, then it's not a prime number.
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 0;
    if (flag == 1)
        return 1;
}