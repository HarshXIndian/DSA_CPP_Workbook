// Template Multiple Parameters In C++ By code with harry !
// tutorial #65
// Date : 3/3/24

#include<iostream>
using namespace std;

/* 
Class Template With Multiple Parameters Syntax:
template<class T1, class T2>
class nameOfClass {
    // class body !
};
class 
*/

template<class T1, class T2>
class Vector{
    public :
        T1 data_1 ;
        T2 data_2 ;
        void setData(T1 x , T2 y){
            data_1 = x ;
            data_2 = y ;
        };
        void display(){
            cout << this -> data_1 << endl ;
            cout << this -> data_2 << endl ;
        }
};

int main(){
    // Vector <char,float> obj ;
    // obj.setData('g',5.34);

    // Vector <char,string> obj ;
    // obj.setData('k',"Hai");

    Vector <int,char> obj ;
    obj.setData(8,'C');

    obj.display();
    return 0;
}