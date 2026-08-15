// date : 4/2/24 
// Cwh : typecasting and refrence variables

#include<iostream>
#include<string>
using namespace std;

int main()
{
    float d = 3.14 ;
    double e = 3.14 ;

    // by default the value of float : 3.14 is double for compiler , hence for creating it really float include f at the end of value :
    d = 3.14F ;
    // and with double we can use L ;
    e = 3.14L ;

    cout << "The size of float 3.14 with 3.14  is : " << sizeof(3.14) << endl ; // 8 : as it assume the value as double and double acqire the memory space 8 bits !
    cout << "The size of float 3.14 with 3.14f is : " << sizeof(3.14f) << endl ;// 4 : as now compiler treat it as float (as we use f) !
    cout << "The size of float 3.14 with 3.14F is : " << sizeof(3.14F) << endl ;// 4 : same as we use F !
    cout << "The size of double 3.14 with 3.14 is : " << sizeof(3.14) << endl ; // 8 : as it is now simple double value !
    cout << "The size of long double 3.14 with 3.14l is : " << sizeof(3.14l) << endl ;// 12 : as now compiler treat it as long double so it show 12 bits size ! 
    cout << "The size of long double 3.14 with 3.14L is : " << sizeof(3.14L) << endl ;// 12 : same as we use L with value . !

    // Refrence Variable :
    // A variable with many names so we can call it by many methods : 
    int marks_of_harsh = 50 ;
    int &Harsh_marks = marks_of_harsh ;

    cout << "marks_of_harsh is : " << marks_of_harsh << endl ;
    cout << "Harsh_marks is : " << Harsh_marks << endl ;

    // Typecasting :
    int a = 45 ;
    float b = 45.6 ;
    cout << "The value of a is : " << a << endl ;
    cout << "The value of a is : " << (float)a << endl ;
    cout << "The value of a is : " << float(a) << endl ;
    cout << "The value of b is : " << b << endl ;
    cout << "The value of b is : " << (int)b << endl ;
    cout << "The value of b is : " << int(b) << endl ;

    cout << "WITHOUT TYPECASTING (a + b)=> " << endl ;
    cout << "int a(45) + floab b(45.6) is : " << a + b << endl ;
    cout << "WITH TYPECASTING (a + int(b))=> " << endl ;
    cout << "int a(45) + float b(45.6) is : " << a + int(b) << endl ;
    return 0 ;
}