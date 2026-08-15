// Nested Scope in C++ , video : 26
#include<iostream>
using namespace std ;

int global = 1 ; // global variable

int main(){
    int local = 0 ; // local variable 
    cout << "Output #1 =>\n" "Global : " << global << "\n" << "Local : " << local << endl ;
    
    int global = 0 ; // local variable but same name as global variable .
    cout << "Output #2 =>\n" "Global : " << global << "\n" << "Local : " << local << endl ;

    cout << "Output #3 =>\n" "Global : " << ::global << "\n" << "Local : " << local << endl ;
    /* ::global access the global variable after that there are already 
       an local variable with same name and high preference but by using 
       :: scope resolution we can access the global variable ! */
    return 0 ;
}