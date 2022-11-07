// enum increase the readibility of reading the program. enum stands for enumerated which means - mention (a number of things) one by one

/*

we may use

#define mon 0

or

const int mon = 0;

but emun is better used when theres a lot of data that needs to be assigned different numbers or continuous numbering.
enum is used for defining a group of constants under one name
*/

#include <iostream>

using namespace std;

enum day
{
    mon = 3, // we may initilise the strating point by defining it like this
    tue,
    wed,
    thu = 8, // we may also define like this and the rest of the data will continue from 8 onwards
    fri,
    sat,
    sun
};

enum dept
{
    cs = 1,
    it,
    ec,
    mech
};

int main()
{

    day d; // day is itself basically int type
    d = tue;

    dept dep = cs;

    cout << d << endl;

    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;
}