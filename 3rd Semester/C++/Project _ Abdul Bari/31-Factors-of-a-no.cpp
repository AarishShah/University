#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a no. ";
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        cout << i << " "<<n/i<<'\n';
    }
    return 0;
}