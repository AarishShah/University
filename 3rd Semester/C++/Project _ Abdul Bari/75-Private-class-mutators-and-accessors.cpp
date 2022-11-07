// It is a good practice to keep data private and the functions public
// One should not have the misconception that "private" secures the data but instead it prevents mishandling.

// Generally "set" and "get" functions are used to access the data that is kept private in a class. Hence they are also called property funtions. The one that is reading the values is called accessor (i.e. get) while the function that writes the values is called mutator (i.e. set). Presence of only accessor is same as read only whereas presence of of accessor as well as mutator is same as read and write. It depends on the policy that I follow as a programmer.

#include <iostream>
using namespace std;

class rectangle

{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l; // We can make an intelligent program by using if-else and try to validate the given inputs
        }
        else
        {
            cout << "Length can't be negative and is now set to 0." << endl;
            length = 0;
        }
    }

    void setBreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
        {
            cout << "Breadth can't be negative and is now set to 0." << endl;
            breadth = 0;
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r;

    r.setLength(15);
    r.setBreadth(10);

    cout << "Area is: " << r.area() << endl;

    r.setLength(15);
    r.setBreadth(-10);

    cout << "Area is: " << r.area() << endl;
}