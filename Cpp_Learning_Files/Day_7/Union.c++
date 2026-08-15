// Introduction to Structures in C : by Neso Acedemy 
#include<iostream>
#include<string>
using namespace std ;

// Union is a user defined data type but unlike sturctures , union members share same memory locations.

struct ab
{
    int a;
    float b ;
} add ;

union abc {
    int a ;
    float b ;
    double c ;
} abc ;

int main(){
    // Address of both variables are diffrenet in memory mean that struture members don't share the memory !
    cout << &(add.a) << endl ;
    cout << &(add.b) << endl ;
    // Address of both variables in union are diffrent that means they are share memory !
    cout << &(abc.a) << endl ;
    cout << &(abc.b) << endl ;
    cout << &(abc.c) << endl ;

    cout << sizeof(add) << endl ; // total size of struct ! sum of both variables total memory allocation !
    // 4 + 4 = total memory allocated is 8 bytes !
    cout << sizeof(abc) << endl ; // size of the union is taken according to the size of the largest member of the union . 
    // 4 , 4 , 8 = total memory allocated is 8 bytes !
    return 0;
}