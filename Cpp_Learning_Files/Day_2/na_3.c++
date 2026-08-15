// Scope of a Name in C++ , video : 25
#include<iostream>
using namespace std ;

int another_func() ; // global function 
int main(){
    int sum = 0;    // sum is local varible or name
    for(int value = 0 ; value < 11 ; value++){
        // value is accessable only within for loop as it in scope
        sum = sum + value ; 
    }
    cout << "Sum of 1 to 10 inclusive is : " << sum << endl ; 
    // cout shows sum value as sum lie within its scope !

    // cout << value << endl ; // Show error as value* can not be access outside the scope 
    another_func(); // calling the function : another_func() 
    return 0 ;
}

int another_func(){
    cout << "This is another function outside main() ! " << endl ;
    // cout << "Sum is : " << sum << endl ; // Again it show error as sum is not in its scope !
}