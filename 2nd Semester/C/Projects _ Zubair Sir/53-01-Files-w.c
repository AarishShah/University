// Files

// in files we store data premanently

// p = fopen("Name of the file.Extension_of_the_file", "parameters");

/*

    parameters are:
    "r" means read file
    "w" means write file; overwrites a file; location of this file will be where the program is saved.
    "a" means appending; by using this as a parameter the pointer will point at the last character of the file

    p = this will point at the first character of the file

*/

#include <stdio.h>

int main()
{
    FILE *p; // the pointer 'p' is like a handle to access this file

    int x = 10;
    char s[6] = "Hello";

    p = fopen("53-01-Files-w.txt", "w");

    fprintf(p, "%d %s", x, s);
    
    fclose(p);
}