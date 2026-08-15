// Constructors With Default Arguments In C++
// Tutorial #32
#include<iostream>
using namespace std;

class simple{
    int data_1 ;
    int data_2 ;
    int data_3 ;
    public:
        simple(int a , int b, int c = 7){ // c have default value 8 
            data_1 = a ;
            data_2 = b ;
            data_3 = c ;
        };
        void showData(){
            cout << "Data of Object is : " << endl ;
            cout << "a : " << data_1 << endl ;
            cout << "b : " << data_2 << endl ;
            cout << "c : " << data_3 << endl ;
        };
};

int main(){
    // call to constructor !
    simple s(5,6),t(1,2,4); 
    s.showData();
    t.showData();
    
    return 0;
}