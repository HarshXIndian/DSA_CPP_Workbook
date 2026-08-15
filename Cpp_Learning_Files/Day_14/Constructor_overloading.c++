// Tutorial #31
// Constructor Overloading by Code with harry !
// Date : 14/02/24
#include<iostream>
using namespace std;

class Overloading{
    int a , b ;
    public :
        void showData(){
            cout << "Data of Object is : " << endl ;
            cout << "a : " << a << endl ;
            cout << "b : " << b << endl ;
        };

    // Default Constructor Without Arguments !
    Overloading(){
        a = 0;
        b = 0;
    }

    // Parametrized Constructor with One Parameter !
    Overloading(int x){
        a = x ;
        b = 0 ;
    }

    // Parametrized Constructor with Two arguments(parameters) !
    Overloading(int x, int y){
        a = x ;
        b = y ;
    }
};

int main(){
    // calling 3 diffrent diffrent constructors :
    // Default Constructor :
    Overloading o1 ;
    o1.showData();

    // Parametrized Constructor (hold one argument) :
    Overloading o2(6) ;
    o2.showData();

    // Parametrized Constructor (hold two argument) :
    Overloading o3(3,8) ;
    o3.showData();
    return 0;
}