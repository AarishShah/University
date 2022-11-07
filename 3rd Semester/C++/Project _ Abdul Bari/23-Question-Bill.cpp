#include <iostream>

using namespace std;

int main()

{
    float bill_amount, discount = 0.0, final = 0.0;
    cout << "Enter Bill Amount: ";
    cin >> bill_amount;

    if (bill_amount < 100)
    {
        discount = 0;
        final = bill_amount;
    }

    else if (bill_amount >= 100 && bill_amount < 500)
    {
        discount = 10 * bill_amount / 100;
        final = bill_amount - discount;
    }

    else if (bill_amount >= 500)
    {
        discount = 20 * bill_amount / 100;
        final = bill_amount - discount;
    }

    cout << "Bill Amount is: " << bill_amount << endl;
    cout << "Discount is: " << discount << endl;
    cout << "Discounted Amount is: " << final;
}

// Sir's program is must more efficient