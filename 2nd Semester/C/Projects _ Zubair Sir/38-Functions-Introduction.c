// Functions

// There are two types of functions: in-built functions and user defined functions.

// In-built functions include:
// main();
// printf("");
// scanf(""),
// strcpy();

// We will be studying user defined functions.

// return_type function_name(parameters)

// return_type - type that will be returned; it could be integer, float, long, or void(in case nothing iis retuned) etc.
// function_name - it can be anything, like, myfunc, newfunc, wtssup, etc
// parameters - the values that a function takes when a it is called.

// We use functions to divide the problem in parts(modules). It is a good habit to do develop this habit as during debugging errors could be identified easily. It's called modular programming.

// Program to find greater of two integers using functions.

#include <stdio.h>

int greater(int, int); // Function declaration

int main()

{
    int a, b;
    int max;

    a = 10;
    b = 5;
    max = greater(a, b); // function "greater" will be called. "a" and "b" will be sent to "greater" in line 39. a is storing 10, so a copy so 10 will be put in x and similarly copy of b which is storing 5 will be put in y.
                         // The argument here is called Actual Arguments ie "a" and "b".  Here we called a function by passing the values hence it's called Call by Value.

    printf("The greater in integer is %d", max);
}

// Defining the function that we had mentioned in line 25.
int greater(int x, int y) // We added x and y because now, here we are defining the function by naming those parameters.
                          // The arguments here is called Formal Arguments.

{
    int g;

    if (x > y)
        g = x;
    else if (x < y)
        g = y;

    return g; // This is the value that will be returned when this function is called.
}