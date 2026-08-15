// Date : 5/2/24 
// Apna Collage : Pointers in C++ .
#include<iostream>
using namespace std ;

// for swap(&a,&b) ;
// int swap(int *a,int *b){
//     int temp ;
//     temp = *a ;
//     *a = *b ;
//     *b = temp ;
// }

// for swap(a,b) ;
int swap(int a,int b){
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
}

int main(){
    int a,b ;

    cout << "Enter the values of 'a' and 'b' : " ;
    cin >> a >> b ;
    cout << "Before swap =>" << endl ;
    cout << "value of a : " << a << "\nvalue of b : " << b << endl ;
    cout << "After swap =>" << endl ;
    // swap(&a,&b);
    swap(a,b) ;
    cout << "value of a : " << a << "\nvalue of b : " << b << endl ;
    return 0 ;
}