#include<iostream>
using namespace std;

// Date:15/03/24
// Compile time polymorphism :
// B ) Operator Overloading : C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
// 1. ) Overloading Unary (-) Operator : 
#include<iostream>
using namespace std;

class Complex{
    int x ;
    int y ;
    int z ;
    public :
    void getData(int a,int b,int c){
        x = a ;
        y = b ;
        z = c ;
    }
    void display(){
        cout << "x : " << x << endl ;
        cout << "y : " << y << endl ;
        cout << "z : " << z << endl ;
    }
    void operator -(){
        x = -x ;
        y = -y ;
        z = -z ;
    }
};

int main(){
    Complex obj ;
    obj.getData(10,5,7);
    cout << "Before Unary Operation : " << endl ;
    obj.display();
    -obj ;
    cout << "After Unary Operation : " << endl ;
    obj.display();
    return 0;
}