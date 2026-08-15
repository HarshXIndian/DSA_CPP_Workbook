// Nesting of Member Function :
// Tutorial #22
// Date : 8/2/24
// Summery :
// Classes = Structures(in C) + more .
// You can declare objects along with the class declaration :
// class Students {
//     // class defination !
// } Harsh,Aman,Naman ;
//" Harsh.age = any value ; " makes no sense if age is Private !

#include <iostream>
#include <string>
using namespace std;

//  -------------> NESTING OF MEMBER FUNCTIONS :

class binary
{
    // Private :
    string binary_num;  // private data member !
    void chk_bin();     // private function member !

public:
    void read();
    // void chk_bin();
    void ones_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter Binary Number : ";
    cin >> binary_num;
}

void binary ::chk_bin()
{
    for (int i = 0; i < binary_num.length(); i++)
    {
        if (binary_num.at(i) != '0' && binary_num.at(i) != '1')
        {
            cout << "Entered value is not In Binary format !" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment()
{   
    // we first call the chk_bin function before further execution of the ones_complement function !
    chk_bin();
    for (int i = 0; i < binary_num.length(); i++)
    {
        if (binary_num.at(i) == '0')
        {
            binary_num.at(i) = '1';
        }
        else
        {
            binary_num.at(i) = '0';
        }
    }
};

void binary ::display()
{
    
    cout << "ones of entered Binary value is : ";
    for (int i = 0; i < binary_num.length(); i++)
    {
        cout << binary_num.at(i);
    }
    cout << endl;
};
int main()
{
    // 1. case :
    // here we declare chk_bin ! so that it execute !
    // But through the nesting functions we can automate its call under any other function like in display function so that along with ones_compliment function execution , chk_bin also executes!
    
    // 2. case :
    // if chk_bin function will private function so that we can't call it !
    // But another member function of same class can call the private function which inhance security of functions and data as well !

    binary b;
    b.read();
    // b.chk_bin(); 
    b.ones_compliment();
    b.display();
    return 0;
}