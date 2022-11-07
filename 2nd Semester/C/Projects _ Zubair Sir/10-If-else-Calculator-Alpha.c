//My Code for calculator

#include <stdio.h>
#include <conio.h>

void main()

{

    int a, b, v;

    printf("Enter two number\n");
    scanf("%d %d", &a, &b);

    printf("1 for Addition, 2 for Subtraction, 3 for multiplication, 4 for division\n");
    scanf("%d", &v);

    if (v == 1)
    {
        printf("The sum is %d \n", a + b);
    }

    if (v == 2)
    {
        printf("The value is %d \n", a - b);
    }
    if (v == 3)

    {
        printf("The product is %d \n", a * b);
    }
    if (v == 4)
    {
        printf("The quotient is %d \n", a / b);
    }

    if (!(v==1 || v==2 || v==3 || v==4)) // "||" means "or"
        printf("Invalid Input\n");

        /*else
        printf("Invalid Input\n");*/
    }