// same as 109-01-n-queen.cpp, but with a different simple variable names

#include <iostream>
using namespace std;

int x[90]; // global array to store the positions of queens

// function to check if a queen can be placed at (k, i) position
bool place(int row, int i)
{
    for (int j = 1; j <= (row - 1); j++)
    {
        // check if the same row or same diagonal is already occupied by a queen
        if (x[j] == i || (abs(x[j] - i) == abs(j - row))) // abs is a built-in function in C++ that returns the absolute value of a given number
            return false;                                 // if so, then return false
    }
    return true; // otherwise, return true
}

// function to find the solutions to the n-queens problem
void nq(int row, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(row, i))
        {
            x[row] = i;   // place a queen at (row, i) position
            if (row == n) // if all queens are placed successfully
            {
                // print the positions of queens in the format of a chessboard
                for (int j = 1; j <= n; j++)
                    cout << x[j] << " ";
                cout << endl; // add a newline character after each solution
            }
            else // try to place the next queen
                nq(row + 1, n);
        }
    }
}

// main function
int main()
{
    nq(1, 4); // find the solutions for the 8-queens problem
    return 0;
}