// Tutorial #56
// Virtual Function by code with harry !

#include<iostream>
using namespace std;

class B{
    public:
    int var_base ;
    // so now , when the pointer of class B object's call the display() function so instead of default calling to the base class function , now the derived class's 'display()' function will excute ! 
    virtual void display(){
        cout << "Base Class is Called !" << endl ;
        cout << "Value of Base Class Variable is : " << var_base << endl ;
    }
};

class D : public B{
    public:
    int var_derived = 5 ;
    void display(){
        cout << "Derived Class is Called !" << endl ;
        cout << "Value of Base Class Variable is : " << var_base << endl ;
        cout << "Value of Derived Class Variable is : " << var_derived << endl ;
    }
};
int main(){
    B obj_base ;
    D obj_derived ;

    B *B_class_pointer ;
    B_class_pointer = & obj_derived ;
    B_class_pointer -> var_base = 45 ;
    B_class_pointer -> display();
    return 0;
}