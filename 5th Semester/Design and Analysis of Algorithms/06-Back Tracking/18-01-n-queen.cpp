// this program has meaningful variable names

#include <iostream>
using namespace std;

int queen_positions[90]; // global array to store the positions of queens

// function to check if a queen can be placed at (row, column) position
bool can_place(int row, int column)
{
    for (int previous_row = 1; previous_row <= (row - 1); previous_row++)
    {
        // check if the same row or same diagonal is already occupied by a queen
        if (queen_positions[previous_row] == column || (abs(queen_positions[previous_row] - column) == abs(previous_row - row))) // abs is a built-in function in C++ that returns the absolute value of a given number
            return false;                                                                                                        // if so, then return false
    }
    return true; // otherwise, return true
}

// function to find the solutions to the n-queens problem
void find_queen_positions(int row, int n)
{
    for (int column = 1; column <= n; column++)
    {
        if (can_place(row, column))
        {
            queen_positions[row] = column; // place a queen at (row, column) position
            if (row == n)                  // if all queens are placed successfully
            {
                // print the positions of queens in the format of a chessboard
                for (int row_index = 1; row_index <= n; row_index++)
                    cout << queen_positions[row_index] << " ";
                cout << endl; // add a newline character after each solution
            }
            else // try to place the next queen
                find_queen_positions(row + 1, n);
        }
    }
}

// main function
int main()
{
    find_queen_positions(1, 4); // find the solutions for the 4-queens problem
    return 0;
}
