// Date : 20/1/24
// Header files and operators by harry v - 6 
// Header Files : 

// There are two types of header files :

// 1. System header files: It comes with compiler.
#include<iostream>
// 2. User Defined header files : It written by the Programmer.
#include "this.h"

// Operators In C++ :
using namespace std ;

int main(){
    int a = 5 ;
    int b = 5 ;
    
    cout << "\nOperators in C++ : " << endl ;
    cout << "Following are the types of Operators in C++ : " << endl << endl ;
    
    // Arithmetic Operators :
    cout << "Arithmetic Operators : " << endl;
    cout << "The Value of a + b is : " << a + b << endl ;
    cout << "The Value of a - b is : " << a - b << endl ;
    cout << "The Value of a * b is : " << a * b << endl ;
    cout << "The Value of a / b is : " << a / b << endl ;
    cout << "The Value of a % b is : " << a % b << endl << endl ;

    // Increment / Decrement Operators :
    cout << "Increment / Decrement Operators : "<< endl ;
    cout << "The Value of a++ is : " << a++ << endl ; // value of a show 5 as it is , after that it increment by 1 and will be 6 but show 5 !
    cout << "The Value of a-- is : " << a-- << endl ; // again value will show 6 as it is incremented last time and after that it decrement by one and will be 5 again !
    cout << "The Value of ++a is : " << ++a << endl ; // now first it will increment so , last time it again gain value 5 so after increment value will be 6 and show 6 in output !
    cout << "The Value of --a is : " << --a << endl << endl; // now again as decrement operator is before the variable so , value first decrease by one and will be 5 , and show 5 by output !
    
    // Assignment Operators :
    int c  = 1 ; // assign the value 1 to new int variable c .
    b = 10 ; // assign the 3 to existing int variable b !
    c += 1 ; // this expression is equals to : c = c + 1 ;
    c -= 2 ; // this expression is equals to : c = c - 2 ;
    c /= 4 ; // this expression is equals to : c = c / 4 ;
    c %= 5 ; // this expression is equals to : c = c % 5 ;

    // Compersion Operators :
    cout << "Compersion  Operators : " << endl;
    cout << "=> 0 = false !" << endl ;
    cout << "=> 1 = true !" << endl ;
    cout << "The value of a == b is : " << (a == b) << endl ; // false as a(5) is not equal to b(10).
    cout << "The value of a != b is : " << (a != b) << endl ; // true as a(5) is not equal to b(10).
    cout << "The value of a <= b is : " << (a <= b) << endl ; // true as a(5) is less than or equal to b(10).
    cout << "The value of a >= b is : " << (a >= b) << endl ; // false as a(5) is not greater than or equal to b(10).
    cout << "The value of a < b is : " << (a < b) << endl ; // true as a(5) is less than b(10).
    cout << "The value of a > b is : " << (a > b) << endl ; // false as a(5) is not greater than b(10).

    // Logiacal Operators :
    cout << "\nLogical Operators : "  << endl ;
    cout << "The value of this Logical and(&&) Operators ((a==b) && (a<b)) is : " << ((a==b) && (a<b)) << endl ;
    cout << "The value of this Logical or(||) Operators ((a==b) || (a<b)) is : " << ((a==b) || (a<b)) << endl ;
    cout << "The value of this Logical not(!) Operators (!(a==b)) is : " << (!(a==b)) << endl ;

    return 0;
}