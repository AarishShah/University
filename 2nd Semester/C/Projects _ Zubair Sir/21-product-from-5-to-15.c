//Write a program in c to find the product of all integers frm 5 to 15

#include <stdio.h>

int main()

{

    long long int i, pdt = 1; //long long can be at most be only used twice


        for (i = 5; i <= 15; i++)

    {
        pdt = pdt * i;
    }

    printf("The product is %lld", pdt); //d for int, ld for long int, lld for long long int

    return 0;
}