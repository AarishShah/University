// Write program for rational numbers

#include <iostream>
using namespace std;

class rational
{
    int numerator, denominator;

public:
    // default constructor
    rational(int p = 1, int q = 1)
    {
        numerator = p;
        denominator = q;
    }

    // copy constructor
    rational(rational &copy)
    {
        numerator = copy.numerator;
        denominator = copy.denominator;
    }

    // Accessors
    int getP()
    {
        return numerator;
    }

    int getQ()
    {
        return denominator;
    }

    // Mutators
    void setP(int nu)
    {
        numerator = nu;
    }

    void setQ(int de)
    {
        denominator = de;
    }

    // addition operator overloading
    friend rational operator+(rational a, rational b);

    // insertion operator overloading
    friend ostream &operator<<(ostream &x, rational &y);

    // insertion operator overloading
    friend istream &operator>>(istream &u, rational &v);

    // destructor
    ~rational()
    {
        // cout << "Class rational destroyed";
    }
};

rational operator+(rational a, rational b)
{
    rational temp;
    temp.numerator = a.numerator * b.denominator + b.numerator * a.denominator; // I copied the formula in line 63 and 64;
    temp.denominator = a.denominator * b.denominator;
    return temp;
}

ostream &operator<<(ostream &x, rational &y)
{
    x << y.numerator << "/" << y.denominator;
    return x;
}

istream &operator>>(istream &u, rational &v)
{
    char y;
    cout << "Enter rational number in the form of p/q: ";
    u >> v.numerator >> y >> v.denominator;

    cout << "Rational number entered is: " << v << "\n\n";
    
    return u;
}

int main()
{
    rational r1, r2, r3;

    // int n1, d1, n2, d2;

    // cout << "Enter numerator and denominator of first rational number:";
    // cin >> n1 >> d1;

    // cout << "Enter numerator and denominator of first rational number:";
    // cin >> n2 >> d2;

    // r1.setP(n1);
    // r1.setQ(d1);
    // r2.setP(n2);
    // r2.setQ(d2);

    cin >> r1 >> r2;

    r3 = r1 + r2;

    cout << "Sum of " << r1 << " and " << r2 << " is " << r3;
}