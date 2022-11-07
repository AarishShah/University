#include <iostream>

using namespace std;

int main()

{
    int x, y;
    cout << "Enter two numbers:\n";
    cin >> x >> y;

    if (x > y) //"We may also use keywords like 'true' or 'false' as well"
    {
        cout << "Max is " << x;
    }
    else
    {
        cout << "Max is " << y;
    }
}