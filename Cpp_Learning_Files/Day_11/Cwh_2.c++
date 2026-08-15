// Date : 11/2/24
// Array of Objects & passing objects as Function arguments in c++ .
// Tutorial #25

// ----------------> Passing Objects as Function Arguments !

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int value_1, int value_2)
    {
        a = value_1;
        b = value_2;
    }

    void objectSum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void showData()
    {
        cout << "Complex Number is : " << a << " + " << b << "i." << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.setData(5, 6);
    c1.showData();

    c2.setData(2, 7);
    c2.showData();

    c3.objectSum(c1, c2);
    c3.showData();

    return 0;
}