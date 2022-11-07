//Recursion

//When a fnction calls itself. Such functions are called recursive functions.

/* Factorial of a number:
5!  = 5*4!
    = 5*4*3!
    = 5*4*3*2!
    = 5*4*3*2*1!
    = 5*4*3*2*1
    = 120

*/

// Use Recursion to find factorial of a number:

#include <stdio.h>
int factorial(int);
int main()
{
    int x;
    int ans;

    printf("Enter a number\n");
    scanf("%d", &x);
    
    ans = factorial(x);
    printf("The factorial of %d is %d", x, ans);
}

int factorial(int n)
{

    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}