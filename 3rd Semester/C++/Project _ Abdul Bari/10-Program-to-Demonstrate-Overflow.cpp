#include <iostream>

using namespace std;

int main()
{
    char a = 128;
    cout << (int)a << endl; // (int)a will show ascii value of 'a' instead of some random character

    char b = 127;
    b++;
    cout << (int)b << endl;

    char c = -129;
    cout << (int)c << endl;

    char d = -128;
    d--;
    cout << (int)d << endl;

    int e = INT_MAX; // max value of integer
    e++;
    cout << (int)e << endl;

    return 0;

}