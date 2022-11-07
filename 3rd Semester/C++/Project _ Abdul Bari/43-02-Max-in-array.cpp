#include <iostream>

using namespace std;

int main()

{
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};

    int max = INT_MIN; // fn to store the lowest in max.

    for (auto x : A)
    {
        if (x > max)
            max = x; // x will always be greater than the lowest int
    }
    cout << "Maximum number is " << max << endl;
}