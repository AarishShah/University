#include <iostream>

using namespace std;

int main()

{
    int i = 0;

    for (;;)
    {
        cout << i << " Hello" << endl;
        i++;

        if (i > 10)
            break;
    }
    return 0;
}