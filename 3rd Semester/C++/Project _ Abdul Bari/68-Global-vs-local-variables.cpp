#include <iostream>
using namespace std;

int g = 5;

void fun()
{
    int g = 10;
    {
        int g = 0;
        g++;
        cout << g << endl;
    }

    cout << g << endl;
}

int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;
}