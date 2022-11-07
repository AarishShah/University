//Program to find the sum of first n natural numbers.

#include <stdio.h>

//From now we don't need #include <conio.h>, clrscr(); or getche(); in dev c

int main()

{

    int n, i, sum = 0;
    printf("Please enter the value of n\n");
    scanf("%d", &n);

    for (i=1; i<= n; i++)

    {
        sum = sum + i;
    }

printf ("The sum is %d", sum);

return 0;
}