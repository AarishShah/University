#include <iostream>
using namespace std;

int knapsack(int weights[], int values[], int capacity, int num_items)
{
    // Base case: if there are no items left to consider or the knapsack has no capacity left, return 0
    if (num_items == 0 || capacity == 0)
        return 0;

    // If the weight of the current item is less than or equal to the remaining capacity of the knapsack
    if (weights[num_items - 1] <= capacity)
    {
        // Calculate the maximum value that can be obtained by either including or excluding the current item
        // If the item is included, the total value is the sum of the item's value and the maximum value that can be obtained from the remaining items and capacity
        // If the item is excluded, the total value is the maximum value that can be obtained from the remaining items and capacity
        return (values[num_items - 1] + knapsack(weights, values, capacity - weights[num_items - 1], num_items - 1));
    }
    else
    {
        // If the weight of the current item is greater than the remaining capacity of the knapsack, skip the item and move on to the next item
        return knapsack(weights, values, capacity, num_items - 1);
    }
}

int main()
{
    int weights[] = {4, 3, 2, 1};
    int values[] = {4, 12, 10, 10};
    int capacity = 4;
    int num_items = 4;
    int ans = knapsack(weights, values, capacity, num_items);
    cout << ans;
}
