//simple case of if-else

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
        printf("a is greater than b");
    }

    else

    {
        printf("a is less than or equal to b");
    }

    //getche();
}