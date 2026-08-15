// Date : 4/2/24 
// CWH : constents,operator precedence and manipulators :

#include<iostream>
#include<iomanip>
using namespace std ;

int main(){
    // Constants =>
    /*
    // constants value are not changable like persons name , roll no. , id etc 
    int age = 18 ;
    age = 19  ; // after one year age's value will change ! and we can change it easily !

    const int id_of_student = 17122004 ;
    // id_of_student = 17122005 ; // show error as id_of_student is a constant
    */

   // Manipulators => 
   int a = 3 ;
   int b = 4 ;
   int c = 5 ;

   cout << "The value of a without setw is :" << a << endl ;
   cout << "The value of a without setw is :" << b << endl ;
   cout << "The value of a without setw is :" << c << endl ;

   cout << "The value of a with setw(1) is :" << setw(1) << a << endl ;
   cout << "The value of a with setw(2) is :" << setw(2) << b << endl ;
   cout << "The value of a with setw(3) is :" << setw(3) << c << endl ;

    // Operator Precedence already Completed !
    return 0;
}