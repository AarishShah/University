#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100] = "Make Khushboo watch JJK";
    char rev[100] = "";
    // cout << "Enter a string: ";
    // cin.get(str, 100);

    cout << "You entered: " << str << endl;

    // Reverse the string
    int length = strlen(str);
    int j = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = ' ';
    cout << "Reverse of the string: " << rev << endl;

    // To reorder the words in the string
    // Note: length of rev will be same as original string

    for (int i = 0; i <= length; i++)
    {
        if (rev[i] == ' ')
        {
            int space = i;

            cout << rev[space - 1];
            
        }
    }
}
