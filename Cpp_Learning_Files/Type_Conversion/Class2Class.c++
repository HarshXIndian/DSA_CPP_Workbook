// Conversion from class type to class type is third type of type conversion . This convrsion can use both the methods , type conversion
// through the constructor or by using overloaded casting operators .
// Date : 11 / 05 / 24
#include<iostream>
using namespace std;

class X{
    public:
    int x ;
    X(){};
    X(int a) { x = a ; };
    void show(){
        cout << "value in Obj_Y is : " << x << endl ;
    };
};

int main(){
    int a ;
    cout << "Enter the value for Object X : " ;
    cin >> a ;
    X Obj_X(a) ; 
    X Obj_Y ;
    Obj_Y = Obj_X ; // Class type to Class type 
    Obj_Y.show();
    return 0 ;
}