//Improved case of if-else

#include <stdio.h>
#include <conio.h>

void main()

{

    int a, b;

    //clrcsr()

    printf("Enter two numbers\n");

    scanf("%d %d", &a, &b);

    if (a > b)

    {
        printf("%d is greater than %d", a,b);
    }

    else if (a == b)

    {
        printf("%d is equal to %d", a,b);
    }

    else
    {
        printf("%d is less than %d", a,b);
    }

    //getche();
}