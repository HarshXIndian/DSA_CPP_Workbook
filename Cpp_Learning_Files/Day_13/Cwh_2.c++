// Tutorial #29
// Cwh : Constructor In C++ 
#include<iostream>
using namespace std ;

class Complex{
    int a , b ;
    public :
    // Creating a Constructor :
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the object of its class .
    // It is automatically invoked whenever an object of its class is created .

    // Constructor Declaration :
    Complex(){
        a = 10 ;
        b = 20 ;
    };
   
    void showData(){
        cout << "Your Number is : "<< a << " + " << b << "i" << endl ;
    };
};

int main(){
    Complex o1, o2 ;
    o1.showData();
    o2.showData();

    return 0;
}

// Properties :
// 1. It should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created .
// 3. It cannot return values and do not have return types .
// 4. It can have default arguments .
// 5. We cannot refer to their address .