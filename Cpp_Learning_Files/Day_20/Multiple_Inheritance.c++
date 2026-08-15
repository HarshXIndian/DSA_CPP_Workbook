// Multiple Inheritance by code with harry !
// tutorial #41
// Date : 21/02/2024

#include<iostream>
using namespace std ;

// Base Class : 1
class Father {
    protected :
    string Father_is ;
    public :
        void Father_name(string name){
            Father_is = name ;
        };
};

// Base Class : 2
class Mother {
    protected :
    string Mother_is ;
    public :
        void Mother_name(string name){
            Mother_is = name ;
        };
};

// Derived Class : Derived from Father and Mother Base classes 
class Child : public Father , public Mother {
    protected :
    string Child_is ;
    public :
        void Child_name(string name){
            Child_is = name ;
        };
        void show_Info(){
            cout << "Parents name of the child '" << Child_is <<"' is : " << endl ;
            cout << "Father Name is : " << Father_is << endl ;
            cout << "Mother Name is : " << Mother_is << endl ;
        }
};

// Syntax for Derived Class , where class is Derived from two or more Base classes !
// class Derived_name : visibility_mode Base_class_1 , visiblility_mode Base_class_2 , visibility_mode Base_class_n {
//     Derived_class Body ;
// }

int main(){
    Child Rakesh ;
    Rakesh.Father_name("Rinku");
    Rakesh.Mother_name("Sukanya");
    Rakesh.Child_name("Rakesh");
    Rakesh.show_Info();
    return 0 ;
}