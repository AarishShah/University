//Write a program in c to find the product of all integers from two numbers entered by user

#include <stdio.h>

int main()

{
    int o, p, i;
    long long int pdt = 1;

    printf("Enter the first number\n");
    scanf("%d", &o); //Be mindful about extra spaces after %d, it could cause errors.

    printf("Enter the second number\n");
    scanf("%d", &p);

    for (i = o; i <= p; i++)

    {
        pdt = pdt * i;
    }

    printf("The product is %lld", pdt); //d for int, ld for long int, lld for long long int

    return 0;
}