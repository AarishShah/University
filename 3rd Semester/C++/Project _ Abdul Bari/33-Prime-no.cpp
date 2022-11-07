#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a no. ";
    cin >> n;
    
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 1)
        cout << "It's a Prime\n";
    else
        cout << "It's not a Prime\n";
    return 0;
}

// Check my program as well in Zubair sir's folder 41-01-Prime.