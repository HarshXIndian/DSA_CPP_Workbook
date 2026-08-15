// pointer to derived class by code with harry !
// Tutorial #55
// Date: 28/02/2024
// Run Time Polymorphism ( late binding ):

#include<iostream>
using namespace std;

class B{
    public:
    int var_base ;
    void display(){
        cout << "Base Class is Called !" << endl ;
        cout << "Value of Base Class Variable is : " << var_base << endl ;
    }
};

class D : public B{
    public:
    int var_derived ;
    void display(){
        cout << "Derived Class is Called !" << endl ;
        cout << "Value of Base Class Variable is : " << var_base << endl ;
        cout << "Value of Derived Class Variable is : " << var_derived << endl ;
    }
};
int main(){
    B obj_base ;
    D obj_derived ;
    // We create a pointer of base class =>
    B *B_class_pointer ;
    // This pointer is points to derived class object !
    B_class_pointer = & obj_derived ;
    // By Default This pointer (B_class_pointer) call the base class functions and can access only base class variables !
    B_class_pointer -> var_base = 10 ;
    // B_class_pointer -> var_derived = 20 ; Show erros as this pointer can not call / access the functions or data of derived class .
    B_class_pointer -> display() ;

    // Create a pointer of Derived Class :
    D *D_class_pointer ;
    D_class_pointer = & obj_derived ;
    // we can also access the variables of base class :
    D_class_pointer -> var_base = 15 ;
    D_class_pointer -> var_derived = 20 ;
    D_class_pointer -> display();

    return 0;
}