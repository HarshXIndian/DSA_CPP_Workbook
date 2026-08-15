// Single Inheritance by Code With Harry !
// Date : 18/02/2024
// Tutorial #38

// --------------> Using Public Visibility !

#include<iostream>
using namespace std;

// 'Base_class' is an Base class .
class Base_Class{
    int data_1 ;
    public :
        int data_2 ;
        void setData(int,int);
        int showData_1();
        int showData_2();
};

// 'Derived_class' is publically derived from Base Class 'Base_Class'.
class Derived_class : public Base_Class {
    int data_3 ; 
    public :
        void process();
        void show();
}; 

void Base_Class :: setData(int d1,int d2){
    data_1 = d1 ;
    data_2 = d2 ;
};

int Base_Class :: showData_1(){
    return data_1 ;
};

int Base_Class :: showData_2(){
    return data_2 ;
};

// NOTE : Why we use showData_1 instead of data_1 ???
// As data_1 is private data member of the Base Class , so it can not be inherited or we can't access it direactly !
// For access that private data member 'data_1' we use another method or way !
// Instead of direact call or accessing we indireactly access data_1 by using any function ,
// like showData_1() ; which return the value of data_1 :) 

void Derived_class :: process(){
    data_3 = data_2 * showData_1(); 
    // data_3 = data_2(9) * (showData_1() = returns the data_1 which is 7) 
    // data_3 = 9 * 7 ;
};

void Derived_class :: show(){
    cout << "Value of Data_1 is : " << showData_1() << endl ;
    cout << "Value of Data_2 is : " << data_2 << endl ;
    cout << "Value of Data_3 is : " << data_3 << endl ;
};

int main(){
    Derived_class o1 ;
    o1.setData(5,7) ;
    /*
    Here we call setdata() function by derived_class object ! and that is 
    possible by inheritance , again setdata() is not declared in derived class
    as you can see . setdata() is public function of the base class so 
    thats why derived class can easily access that function and can call !
    */
    o1.process() ;
    o1.show();
    
    return 0 ;
};