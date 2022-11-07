//Creating and printing an array.

#include <stdio.h>

int main()

{
    int a[5] = {'c', '4', 6, 1, 8}; //Ask Why does it work without char

    //since line 8 is a declaration statement therefore it only indicates the size of an array; type of this array is integer type
    //in line 8 we are storing the values ourselves

    printf("%c, ", a[0]);  //Doubt
    printf("%c, ", a[1]);  //Doubt
    printf("%d, ", a[2]);
    printf("%d, ", a[3]);
    printf("%d", a[4]);
}