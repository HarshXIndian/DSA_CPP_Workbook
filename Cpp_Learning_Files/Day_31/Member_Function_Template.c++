// Date: 4/3/24
// tutorial #68
// Member Function Template & Overloading Template Function in C++

// ----------> Template Use In Member function declaration outside the class using scope resolution operators !

#include<iostream>
using namespace std;

template <class T1>
class Harsh{
    public :
    T1 a ;
    Harsh(T1 x){
        a = x ;
    }
    void display();
};


// Simple declaration of an member function outside the class is using scope resolution was :
// void Harsh :: display(){};

// Using Template for member function : 
template <class T1>
void Harsh <T1> :: display(){
    cout << a << endl ;
};

int main(){
    // ----------> Template Use In Member function declaration outside the class using scope resolution operators !
    Harsh <string> H("harsh");
    // Harsh <float> H(3.14);
    // Harsh <char> H('h');
    // Harsh <int> H(89);
    
    // cout << H.a << endl ;
    H.display();
    return 0 ;
}