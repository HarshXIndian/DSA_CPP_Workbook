// Friend Classes & Member Friends Functions in C++
// Tutorial #27
#include<iostream>
using namespace std;

// Forward declaration for complex as it is used in calculator class before full declaration !
class complex ;

class calculator {
    public :
        int sum(int val_1 , int val_2){
            return (val_1 + val_2);
        };

        int sumRealComplex(complex ,complex );
        int sumCompComplex(complex ,complex );
}; 

class complex {
    int a ;
    int b ;
    public :
        void getData(int value_1, int value_2){
            a = value_1 ;
            b = value_2 ;
        }; 

        /*
        Friend Function declaration for each function of any class :
        // Friend function declaration for sumRealComplex(); function =>
        friend int calculator :: sumRealComplex(complex o1,complex o2) ;
        // Friend function declaration for sumCompComplex(); function =>
        friend int calculator :: sumCompComplex(complex o1,complex o2) ;
        */

        /*
        Friend class declaration for entire calculator class !!!
        */
        friend class calculator ;

        void display(){
            cout << "Your Numbers is : " << a << " + " << b << "i" << endl ;
        };
};

int calculator :: sumRealComplex(complex o1,complex o2){
    return (o1.a + o2.a) ;
}

int calculator :: sumCompComplex(complex o1,complex o2){
    return (o1.b + o2.b) ;
}

int main(){ 
    complex c1,c2 ;
    c1.getData(1,5);
    c2.getData(2,3);

    calculator calc ;
    int resReal = calc.sumRealComplex(c1,c2);
    cout << resReal << endl ;
    int resComp = calc.sumCompComplex(c1,c2);
    cout << resComp << endl ;
    return 0 ;
}