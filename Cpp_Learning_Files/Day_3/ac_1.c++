// Post Increment/Decrement (a++/a--) , Pre Increment/Decrement (++a/--a)
#include<iostream>
using namespace std ;
int main(){
    // Pre Increment (++a)
    // Increment a Instantly 
    int a = 10 ;
    int b ;

    b = ++a ; // b = a where 'a' will be 11 even before assign .
    cout << a << " " << b << endl ;
    // Output #1 => 11 11 

    // Post Increment (a++)
    // Current value of a is preserved temporarily. a will get incremented before next statement is exicuted .
    a = 10 ;
    b = 0 ;

    b = a++ ; // b = a where 'a' will be 11 but after assign to 'b' .
    cout << a << " " << b << endl ;
    // Output #2 => 11 10
    return 0 ;
}