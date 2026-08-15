// Cwh : Funcitons & Funtions Prototype in C++ 
// Tutorial #15 

// Function Prototype :
// type function_name (arguments);
// int sum(int a , int b ); // Acceptable !
// int sum(int a , b ); // Not Acceptable !
int sum(int , int ); // Acceptable !

#include<iostream>
using namespace std;
int main(){
    int num1 ;
    int num2 ;
    cout << "Enter the number 1 : " ;
    cin >> num1 ;
    cout << "Enter the number 2 : " ;
    cin >> num2 ;
    // 'num1' and 'num2' are actual parameters !
    cout << "Sum of number 1 and 2 is : " << sum(num1,num2) << endl ;
    return 0;
};

// 'a' and 'b' is formal parameters as they taken values from actual parameters num1 and num2 respectively !
int sum(int a, int b ){
    int c = a + b ;
    return c ;
};