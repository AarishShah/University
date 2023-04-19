// Matrix multiplication problem using dynamic programming
// time complexity: O(n^3)
// space complexity: O(n^2)
// Link: https://youtu.be/eKkXU3uu2zk
// Note: I have updated the variable names and added comments for better understanding

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int matrix_dimensions[] = {5, 4, 6, 2, 7}; // Dimensions of the matrices to be multiplied (5x4, 4x6, 6x2, 2x7)
    int m[n][n] = {0};                         // Minimum values for multiplication
    int split_points[n][n] = {0};              // Split points for minimum values, this matrix will tell which matrix to multiply first
    int j, min_val, tmp;

    // Iterating through diagonals
    for (int diag = 1; diag < n - 1; diag++) // will ittirate from one diagonal to another (from i.e. from diagonal to top right element). D is for difference, explanation: https://youtu.be/eKkXU3uu2zk?t=198
    {
        // Iterating through rows
        for (int i = 1; i < n - diag; i++) // Since rows are reducing by 1
        {
            j = i + diag; // j is the column number and is computed by adding the row number and diagonal difference
            min_val = INT_MAX;

            // Iterating through possible split points
            for (int k = i; k <= j - 1; k++)
            {
                // formula for matrix multiplication
                tmp = m[i][k] + m[k + 1][j] + matrix_dimensions[i - 1] * matrix_dimensions[k] * matrix_dimensions[j];

                // Updating minimum and split points if current value is smaller
                if (tmp < min_val)
                {
                    min_val = tmp;
                    split_points[i][j] = k;
                }
            }
            // Updating minimum value for current subproblem
            m[i][j] = min_val;
        }
    }

    cout << "Minimum number of scalar multiplications: " << m[1][n - 1] << endl;

    // Resulting matrix from which we could derive the order of multiplication
    cout << "Split points for minimum values: " << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << split_points[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}