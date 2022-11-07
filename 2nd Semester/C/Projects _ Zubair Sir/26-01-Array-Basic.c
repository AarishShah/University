//Creating and printing an array.

#include <stdio.h>

int main()

{
    int a[5] = {2, 4, 6, 1, 8};

    //since line 8 is a declaration statement therefore it only indicates the size of an array; type of this array is integer type
    //in line 8 we are storing the values ourselves

    printf("%d, ", a[0]);
    printf("%d, ", a[1]);
    printf("%d, ", a[2]);
    printf("%d, ", a[3]);
    printf("%d", a[4]);
}