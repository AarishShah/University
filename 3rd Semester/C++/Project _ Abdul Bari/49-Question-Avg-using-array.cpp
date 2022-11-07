#include <iostream>

using namespace std;

int main()
{
    float A[100], sum = 0.0, avg;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Scanning values from user and adding as well
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> A[i];
        sum = sum + A[i];
    }

    // Avg
    avg = sum / n;
    cout << "Average = " << avg << endl;
}