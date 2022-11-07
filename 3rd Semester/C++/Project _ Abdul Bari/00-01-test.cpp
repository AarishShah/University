#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int y;

    try
    {
        cin >> y;
        if (y == 0)
            throw "zero";
        int z = x / y;
        cout << z;
    }
    catch (const char *s)
    {
        cout << "div zero";
    }
}