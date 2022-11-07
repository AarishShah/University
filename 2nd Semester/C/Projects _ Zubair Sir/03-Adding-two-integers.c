//Adding two integers */

#include <stdio.h>
#include <conio.h>

void main()

{

    int x, y, z;

    //clrscr();

    printf("Please enter first integer\n"); //Don't use "printf("Please enter first integer\n", x);" it only means that you want to print some value in the string of print function using %d or %f etc.
    scanf("%d", &x);

    printf("Please enter second integer\n");
    scanf("%d", &y);

    z = x + y;

    printf("Sum of the two integers = %d", z);

    //getche();
}