// tutorial #68
// Member Function Template & Overloading Template Function in C++

// ----------> Templates With Overloading !

#include<iostream>
using namespace std;

// Exact type Fucntion !
void fn(int a){
    cout << "I Am Exact Match 'int' Function() : " << a << endl ;
};

// Genaric Type Function !
template <class T>
void fn(T a){
    cout << "I Am Template Match 'Any_DataType' Function() : " << a << endl ;
};

int main(){
// ----------> Template Use In Overloading !
    fn(5); // Exact Math takes the highest Priority !
    fn(5.5); 
    return 0 ;
}