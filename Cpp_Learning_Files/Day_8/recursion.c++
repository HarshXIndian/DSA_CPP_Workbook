// Cwh : Recursions & recursive function ub c++
// Tutorial #18
#include<iostream>
using namespace std ;

// ----------> Recursive Function :
int factorial(int n){
    // Base Condtion :
    if(n <= 1){
        return 1 ;
    }
    // Recursion :
    return n * factorial(n-1) ;
};
// Step by step calculation of factorial(5) :
// factorial(5) = 5 * factorial(4) ;
// factorial(5) = 5 * 4 * factorial(3) ;
// factorial(5) = 5 * 4 * 3 * factorial(2) ;
// factorial(5) = 5 * 4 * 3 * 2 * factorial(1) ;
// factorial(5) = 5 * 4 * 3 * 2 * 1 ;
// factorial(5) = 120 ; 

// ----------> Fibonacci Series :
// Location  : 0,1,2,3,4,5,06,07,08 .....
// values at : 1,1,2,3,5,8,13,21,34 .....
int fib(int x){
    // Base Condition :
    if(x < 2 ){
        return 1 ;
    }
    return fib(x - 2) + fib(x - 1) ;
};


int main(){
    // Factorial of a number :
    // n! = n*(n-1)! .
    // 5! = 5 * 4 * 3 * 2 * 1 = 120 .
    // 0! = 1 By Defination !
    // 1! = 1 By Defination !
    int a ;
    cout << "Enter any number : " ;
    cin >> a ;
    cout << "factorial of number " << a << " is : " << factorial(a) << endl ;
    cout << "The term in fibonacci sequence at Position " << a << " is : " << fib(a) << endl ;
    return 0;
}