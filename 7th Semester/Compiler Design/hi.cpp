#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string str = "";
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s", str);
    printf("\n");

    string reverse = strrev(str);


}
