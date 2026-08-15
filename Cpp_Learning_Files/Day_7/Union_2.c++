// Unions in C++ By Neso Acedemy :
#include<iostream>
using namespace std;

// In Unions , members will share same memory locations, if we make changes in one memeber than it will be reflected to other member as well .

union abc {
    int a ;
    char b ;
} var ;

int main(){
    var.a = 65 ;
    cout << "a is : " << var.a << endl ; // 65
    cout << "a is : " << var.b << endl ; // A

    /*
    Output : we will get this output on screen =>
    a is : 65 
    b is : A 
    now you may might wondering why I'm getting this capital A over here a is equals to 65 is okay ! , Right !
    but b is a character we know that in union both these members are sharing the same memory location right !
    so 65 is also shared by character b we know that the ASCII code of capital a is 65 so where b will be capital 
    A . if we print this as a character on the screen therefore capital A will get printed over here .
    */

    // Accessing the members of union :
    // We can access the members of union through pointers by using the arrow (->) opertor .

    union abc *ptr = &var ;
    ptr -> a = 90 ; // alsp redefine the value of union member !
    cout << "a is : " << ptr -> a << endl ; // 90
    cout << "a is : " << ptr -> b << endl ; // Z
    return 0 ;
}