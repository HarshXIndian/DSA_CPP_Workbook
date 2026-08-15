// Inheritance Syntax & Visibility Mode in C++ By Code With Harry !
// Tutorial #37

#include<iostream>
using namespace std;

// Base Class :
class Employee{
    float salary ;
    public :
    int id ;
        Employee(){};
        Employee(int Id_){
            id = Id_ ;
            salary = 600 ;
        }
};

// Derived Class Declaration Syntax :
/*
class {derived_class_name} : {visibility_mode} {Base_class_name}
{
    class members / methods / etc ...
}
Note : 
1. Default Visibility mode is private .
2. Public visibility mode : Public members of the base class becomes Public members of the derived class.
3. Private visibility mode : Public members of the base class becomes Private members of the derived class .
4. Private members of the base class is never inherited !
*/

// Creating a Programmer class derived from Employee Base Class :
class Programmer : Employee {
    public:
    string language_ = "JavaScript" ;
    int expirence_years = 2 ;
    Programmer(int id_){
        id = id_ ;
    };
    void show(){
        cout << "Id of the Programmer is : " << id << endl ;
    };
};

int main(){
    Employee Harsh(10),naman(6);
    cout << Harsh.id << endl ; // error : can't access private data of class !
    Programmer Harsh_programmer(5);
    cout << Harsh_programmer.language_ << endl ;
    // cout << Harsh_programmer.id << endl ; 
    Harsh_programmer.show();
    return 0 ;
}