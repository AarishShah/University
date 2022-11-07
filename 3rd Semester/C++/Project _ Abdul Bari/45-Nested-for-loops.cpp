// Nested for loops are usually used in multidimentional arrays

#include <iostream>

using namespace std;

int main()

{
    for (int i = 1; i <= 3; i++) // i is for for rows
    {
        for (int j = 1; j <= 3; j++) // j is for columns
        {
            cout << i << "," << j << "\t";
        }
        cout << endl;
    }
}