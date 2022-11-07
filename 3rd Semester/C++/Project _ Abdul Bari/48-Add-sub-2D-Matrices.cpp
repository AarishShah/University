#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];

    // Adding A and B and storing in C
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displaying C
    cout << "Addition is:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    // Subtracting A and B and storing in C
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Displaying C
    cout << "Subtraction is:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}