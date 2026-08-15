// Global and Local Variables By code with harry Video - 4
#include<iostream>
using namespace std ;

int global_variable = 5 ; 
// this is an actual global variable as declared outside of any class or main() function !
void sum(){
    int a ; 
    cout << "The value of global variable is : " <<global_variable << endl ;
    // it will show the actual global varaiable value as it can not access the local variable of funtion main() .
    // It doesn't return any value as it is void instead of int .
}

int main(){
    int global_variable = 10 ; // this is local variable !
    sum() ; // call to function sum() 
    cout << "Global variable value is : " << global_variable << endl ;
    // local variable have more precedence than global variables !
    // this cout statement will shows the actual global variable value if there is no local variable with same name [comment local variable declaration for try !]
    return 0;
}