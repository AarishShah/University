#include <iostream>
using namespace std;

int main()
{
    float weight[3] = {5, 2, 10};
    float profit[3] = {1000, 200, 300};
    float x[3]; // x is the fraction of the weight of the item
    float capacity = 15.0; // capacity of the knapsack

    for (int i = 0; i < 3; i++)
    {
        if (weight[i] <= capacity) // if item can be added to the knapsack
        {
            x[i] = 1;
            capacity = capacity - weight[i]; // capacity of the knapsack is reduced by the weight of the item
        }
        else
        {
            x[i] = capacity / weight[i];
            capacity = 0;
            break;
        }
    }

    float sum = 0;
    for (int i = 0; i < 3; i++)
        sum = sum + x[i] * profit[i];

    cout << "Profit is " << sum;
}