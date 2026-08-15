// Tutorial #16
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b ;
    return c ;
}

// int a and int b are formal parameters , they are copy value from the actual parameters a and b !
// Hence the change in this function on values of a and b is not effect actual values of a and b !
// It's Call By Values !
// void swap(int a , int b ){
//     int temp = a ;
//     a = b ;
//     b = temp ;
// }

// so now it access the diract address so now change in values reflact !
// It's Call By Refrence !
// void swap(int &a , int &b ){
//     int temp = a ;
//     a = b ;
//     b = temp ;
// }

// It's Call by Refrence using C++ refrence variables 
void swap_Refrece_var(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp ;
};

int main(){
    int a ;
    int b ;
    cout << "Enter the value 'a' : " ;
    cin >> a ;
    cout << "Enter the value 'b' : " ;
    cin >> b ;
    cout << "The sum of " << a << " and " << b << " is : " << sum(a,b) << endl ;
    cout << "Before swap : " << endl ;
    cout << "a : " << a << "\nb : " << b << endl ;
    cout << "After swap : " << endl ;
    // a and b are actual parameters !
    // swap(a,b); // Passing diract values !
    // swap(a,b); // Passing address of variables ! This will swap a and b using pointer reference !
    swap_Refrece_var(a,b); // Passing Refrence variable ! This will swap a and b using refrence vaiables !
    cout << "a : " << a << "\nb : " << b << endl ;
    return 0;
}