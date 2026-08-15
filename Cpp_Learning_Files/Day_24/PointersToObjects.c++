// Tutorial #51
// Date: 26/02/2024
// Pointers to Objects and Arrow Operator !

#include<iostream>
using namespace std;

class Complex {
    int real,imag ;
    public :
        void setData(int a,int b){
            real = a;
            imag = b ;
        }
        void getData(){
            cout << "The Real Part is : " << real << " and The Imaginary Part is : " << imag << endl ;
        }
};

int main(){
    // One way to create and access the objects of Complex class is : 
    // Complex o1 ;
    // o1.setData(5,7);
    // o1.getData();

    // Second way is to use pointers to access the objects function and members ! : 
    // Complex o1 ;
    // Complex *ptr = &o1 ;
    // (*ptr).setData(5,7);
    // (*ptr).getData();

    // Third way is to use pointers with new operator to declare and access the objects function and members ! : 
    // Complex *ptr = new Complex ;
    // (*ptr).setData(5,7);
    // (*ptr).getData();
    // // now we can also delete the objects using delete operator !
    // delete ptr ;
    // (*ptr).getData();

    // Fourt way is to use pointers with Arrow Operator to access the objects function and members ! : 
    // Complex *ptr = new Complex ;
    // ptr -> setData(5,7);
    // ptr -> getData();
    // again we can delete the objects using delete operator !
    // delete ptr ;
    // (*ptr).getData();

    // Arrays of Objects Declaration using new Operator :
    Complex *ptr = new Complex[5] ;
    // Object no. :     1      ,     2      ,     3      ,     4      ,     5
    // We Declare : Complex[0] , Complex[1] , Complex[2] , Complex[3] , Complex[4] 
    // Access By  : *ptr       , *ptr + 1   , *ptr + 2   , *ptr + 3   , *ptr + 4
    (ptr) -> setData(1,2);
    // (ptr + 1) -> setData(3,4);
    // (ptr + 2) -> setData(5,6);
    // (ptr + 3) -> setData(7,8);
    // (ptr + 4) -> setData(9,10);
    (ptr) -> getData();
    // (ptr + 1) -> getData();
    // (ptr + 2) -> getData();
    // (ptr + 3) -> getData();
    // (ptr + 4) -> getData();
    delete[] ptr ;
    (ptr) -> getData();
    // (ptr + 1) -> getData();
    // (ptr + 2) -> getData();
    // (ptr + 3) -> getData();
    // (ptr + 4) -> getData();
    return 0;
}