// Tutorial #48
// Date: 23/02/2024
// Code_Example : Constructor in Base Class By code with harry !

#include<iostream>
using namespace std;

/*

Case 1:
Class D : public B {
    // Order of execution of Constructor -> First B() then D() .
}

Case 2:
Class D : public B , public A {
    // Order of execution of Constructor -> First B() then A() and D().
}

Case 3:
Class D : public B , virtual public A {
    // Order of execution of Constructor -> First A() then B() and D().
}

*/


class Base1 {
    int data1 ;
    public :
    Base1(int i){
        data1 = i ;
        cout << "Base1 Class Constructor is called !" << endl ;
    };
    void printData_Base1(){
        cout << "The value of data1 is : " << data1 << endl ;
    };
};

class Base2 {
    int data2 ;
    public :
    Base2(int i){
        data2 = i ;
        cout << "Base2 Class Constructor is called !" << endl ;
    };
    void printData_Base2(){
        cout << "The value of data2 is : " << data2 << endl ;
    };
};


/*

Case 1:
Class D : public B {
    // Order of execution of Constructor -> First B() then D() .
}

class Derived : public Base1 {
    int derived1, derived2 ;
    public :
        Derived(int a,int b,int c) : Base1(a){
            derived1 = b ;
            derived2 = c ;
            cout << "Derived Class Constructor is called !" << endl ;
        }
        void printData_Derived(){
            cout << "The value of derived1 is : " << derived1 << endl ;
            cout << "The value of derived2 is : " << derived2 << endl ;
        }
};

OUTPUT :Base1 constructor is called !
        Derived constructor is called !

-----------------------------------------------------------------------------------

Case 2:
Class D : public B , public C{
    // Order of execution of Constructor -> First B() then C() and D() .
}

class Derived : public Base1 , public Base2{
    int derived1, derived2 ;
    public :
        Derived(int a,int b,int c,int d) : Base1(a) , Base2(b){
            derived1 = c ;
            derived2 = d ;
            cout << "Derived Class Constructor is called !" << endl ;
        }
        void printData_Derived(){
            cout << "The value of derived1 is : " << derived1 << endl ;
            cout << "The value of derived2 is : " << derived2 << endl ;
        }
};

OUTPUT :Base1 constructor is called !
        Base2 constructor is called !
        Derived constructor is called !

-------------------------------------------------------------------------------------

Case 3:
Class D : public B , virtual public C{
    // Order of execution of Constructor -> First C() then B() and D() .
}

class Derived : public Base1 , virtual public Base2{
    int derived1, derived2 ;
    public :
        Derived(int a,int b,int c, int d) : Base1(a) , Base2(b){
            derived1 = c ;
            derived2 = d ;
            cout << "Derived Class Constructor is called !" << endl ;
        }
        void printData_Derived(){
            cout << "The value of derived1 is : " << derived1 << endl ;
            cout << "The value of derived2 is : " << derived2 << endl ;
        }
};

OUTPUT :Base2 constructor is called !
        Base1 constructor is called !
        Derived constructor is called !
*/

class Derived : public Base1 , virtual public Base2 {
    int derived1, derived2 ;
    public :
        Derived(int a,int b,int c,int d) : Base1(a), Base2(b) {
            derived1 = c ;
            derived2 = d ;
            cout << "Derived Class Constructor is called !" << endl ;
        }
        void printData_Derived(){
            cout << "The value of derived1 is : " << derived1 << endl ;
            cout << "The value of derived2 is : " << derived2 << endl ;
        }
};

int main(){

    Derived d(1,2,3,4) ;
    d.printData_Base1();
    d.printData_Base2();
    d.printData_Derived();
    
    return 0;
}