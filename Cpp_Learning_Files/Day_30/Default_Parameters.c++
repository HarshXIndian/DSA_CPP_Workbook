// C++ Templates , Class Templates with Default Parameters 
// Tutorial #66
#include<iostream>
using namespace std ;

template <class T1 = int , class T2 = float >
class Harsh {
    public:
    T1 a;
    T2 b;
    Harsh(T1 x, T2 y){
        a = x ;
        b = y ;
    }
    void display(){
        cout << "The vlaue of a is : " << a << endl ;
        cout << "The vlaue of b is : " << b << endl ;
    }
};

int main(){
    Harsh <> h(4,6.4) ;
    h.display();
    cout << endl ;
    Harsh <char,int> i('t',78) ;
    i.display();
    cout << endl ;
    Harsh <char> j('p',78.5) ;
    j.display();
    cout << endl ;
    Harsh <int,char> k(2,'q') ;
    k.display();
    return 0 ;
}