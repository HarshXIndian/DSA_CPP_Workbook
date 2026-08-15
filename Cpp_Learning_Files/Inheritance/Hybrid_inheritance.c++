// Date : 12 / 05 / 24
#include<iostream>
using namespace std;

class Base{
    public:
    int x = 10 ;
    Base(){
        cout << "Base Class Constructed !" << endl ;
    }
    ~Base(){
        cout << "Base Class Distructed !" << endl ;
    }
};

class Derived_A : virtual public Base{
    public :
    int y = 5 ;
    void setData_A(){
        y = y + x ;
    }
    Derived_A(){
        cout << "Derived_A Class Constructed !" << endl ;
    }
    ~Derived_A(){
        cout << "Derived_A Class Distructed !" << endl ;
    }
};

class Derived_B : virtual public Base {
    public :
    int z = 15;
    void setData_B(){
        z = z + x ;
    }
    Derived_B(){
        cout << "Derived_B Class Constructed !" << endl ;
    }
    ~Derived_B(){
        cout << "Derived_B Class Distructed !" << endl ;
    }
};

class Final_Derived : virtual public Derived_A , public Derived_B {
    public :
    int f ;
    void setData_F(){
        f = y + z + x;
    }
    void show(){
        setData_A();
        setData_B();
        setData_F();
        cout << f << endl ;
    }
    Final_Derived(){
        cout << "Fianl_Derived Class Constructed !" << endl ;
    }
    ~Final_Derived(){
        cout << "Fianl_Derived Class Distructed !" << endl ;
    }
};
int main(){
    Final_Derived o1 ;
    o1.show() ;
    return 0;
}