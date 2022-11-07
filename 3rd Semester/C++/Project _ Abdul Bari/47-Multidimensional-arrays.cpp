#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {1, 2, 3, 4, 5, 6};
    int C[2][3] = {2, 3}; // other values will automatically become equal to 0.

    for (int i = 0; i < 2; i++) // 'i' is for rows
    {
        for (int j = 0; j < 3; j++) // 'j' is for columns
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "-------------------" << endl
         << "Using for each:" << endl;

    for (auto &x : A) // I did not understand this for each loop, ask sir
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}