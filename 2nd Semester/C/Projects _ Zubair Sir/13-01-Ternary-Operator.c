//simple case of if-else

/*

condition ? value_if_true : value_if_false

*/

#include <stdio.h>
#include <conio.h>

void main()

{

    int a, b;

    //clrcsr()

    printf("Enter two numbers\n");

    scanf("%d %d", &a, &b);

    //(condition)? (statement when true): (statement when false);
    (a > b) ? printf("a is greater than b") : printf("a is less than or equal to b");

    //getche();
}