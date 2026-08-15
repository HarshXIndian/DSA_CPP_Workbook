// #tutorial #53
// 'this' Pointer in C++ by code with harry !
// this is a pointer !

#include<iostream>
using namespace std;

class Base{
    int a;
    public :
        void setData(int a){
            // a = a ; Provide Garbage value in result !
            this -> a = a ;
            // this is a keyword which is a pointer to the objects which invokes the member function , 
            // it also helps to 'return' the address of object by which the function was called !
        }  
        Base & Object(){
            return *this ;
        } 
        void getData(){
            cout << "The Value of a is : " << a << endl ;
        }
};

int main(){
    Base o1 ;
    o1.setData(5) ;
    o1.getData() ;

    o1.Object().setData(7) ;
    o1.Object().getData() ;

    return 0;
}