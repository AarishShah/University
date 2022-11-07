// Note: I have understood this topic but to get details about this topic (Nested classes) reffer to Abdul Bari's Videos (16. Friend and Static Members  Inner Classes\7. InnerNested Class.mp4 & 16. Friend and Static Members  Inner Classes\7. 8. Demo - Inner Classes.mp4).

#include <iostream>
using namespace std;

class outer
{
private:
    int a = 10;

public:
    int b = 20;
    static int c;
    void fun()
    {
        cout << "This is a fn of outer class";
    }

    class inner
    {
    private: // only public is visible to outer class as if it'd have been for any other class
        int z = 110;

    public:
        int y = 120;

        void show() // try fn overloading
        {
            // cout << a; // inner class can't access the non static data members
            cout << c; // inner class can access the static data members
        }
    };

    inner i; // object of inner class
};

int outer::c = 30;

int main()
{
    outer o;
}