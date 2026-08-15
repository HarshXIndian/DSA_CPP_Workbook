// Desstructor in C++ By Code With Harry !
#include<iostream>
using namespace std;
int count = 0 ;

class Constructor{
    public :
        Constructor(){
            count++;
            cout << "Constructor is called for Object Number : " << count << endl ;
        };
        // Destructor never takes an argument nor does it return any values !! 
        // Destructor have same name as class name or constructor name with starting tild (~) sign !!
        ~Constructor(){
            cout << "Destructor is called for Object Number : " << count << endl ;
            count-- ;
        };
};

int main(){
    cout << "//-----------> Starting Main Function();" << endl ;
    cout << "//---------> Creating first Object by constructor !" << endl ;
    Constructor object_1 ;
    {
        cout << "//------> Entering in a Block !" << endl ;
        cout << "//------> Creating Two more Objects : " << endl ;
        Constructor object_2 , object_3 ;
        cout << "Exiting From this Block !" << endl ;
    };
    cout << "Back to main function(); " << endl ;
    return 0 ;
}