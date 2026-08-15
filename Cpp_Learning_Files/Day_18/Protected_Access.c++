// Protected Access in C++ By code with harry !
// Date : 18/02/2024
// Tutorial #39

#include<iostream>
using namespace std;

// Base Class :
class Base {
    protected :
        int a = 5 ;
        string medium_secure ;
        int show_a(){
            return a ;
        };
    private :
        int b = 8;
        string Highly_secure ;
        int show_b(){
            return b ;
        };
    public :
        int c = 10 ;
        string less_secure ;
        int show_c(){
            return c ;
        };
}; 

class Derived_1 : protected Base {
    public :
        void showData(){
            cout << show_a() << a << endl ;
            // cout << show_b() << endl ; Throw error as Private members is Not inherited in Protected Derivation !
            cout << show_c() << c << endl ;
        };
};

class Derived_2 : public Base {
    public :
        void showData(){
            cout << show_a() << a << endl ;
            // cout << show_b() << endl ; Throw error as Private members is Not inherited in Public Derivation !
            cout << show_c() << c << endl ;
        };
};

class Derived_3 : private Base {
    public :
        void showData(){
            cout << show_a() << a << endl ;
            // cout << show_b() << endl ; Throw error as Private members is Not inherited in Private Derivation !
            cout << show_c() << c << endl ;
        };
};
/*
Visibility Properties in Derived class :
For a protected Member : 
    Visibility :            Public Derivation :        Private Derivation (Default) :        Protected Derivation :
    1. private member :     Not Inherited              Not Inherited                         Not Inherited
    2. protected meb. :     Protected                  Private                               Protected
    3. public members :     Inherited                  Private                               Protected  
*/

int main(){
    Base b ;
    Derived_1 d ;
    d.showData();

    Derived_2 d_2 ;
    d_2.showData();

    Derived_3 d_3 ;
    d_3.showData();

    // cout << d.a << endl ; // Will not work since 'a' is portected in both 'Base' as well as 'Derived' class
    return 0;
}