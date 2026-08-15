#include<iostream>
using namespace std;
// Date:15/03/24
// Compile time polymorphism :
// B ) Operator Overloading : C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
// 2. ) Overloading Binary (+) Operator : 

class Complex{
    int x ;
    int y ;
    public :
    Complex(){};
    Complex(float real, float imag){
        x = real ;
        y = imag ;
    };
    Complex operator +(Complex obj){
        Complex temp ;
        temp.x = x + obj.x ;
        temp.y = y + obj.y ;
        return (temp) ;
    }
    void display(){
        cout << x << " + " << "i" << y << endl ;
    }
};

int main(){
    Complex o1(5,6);
    Complex o2(6,9);
    Complex o3;
    o1.display();
    o2.display();
    cout << "--------" << endl ;
    o3 = o1+o2 ;
    o3.display();
    return 0;
}