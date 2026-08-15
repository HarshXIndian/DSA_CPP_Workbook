// Basic Of Variables , Data Types 
// Source => Apna Collage Playlist video : 2
#include<iostream>
using namespace std ;

int main(){
    
    // variables or data types are like a container contains specfic type of values.
    // We have 3 types of categories for data types / variables types :

    //  Premitive        Derived         User-Defined 
    //  Int              Function        Class
    //  Float(& double)  Array           Structure
    //  Char             Pointer         Union
    //  Bool             Refrence        Enum

    // They have different different types of size in memory , measered by bytes ( 1 bytes = 8 bits ( 1 bit = 0 or 1 ))

    int i = 1 ;
    cout << "size of Int variable is : " << sizeof(i) << endl ;

    float f = 3.14 ;
    cout << "size of Float variable is : " << sizeof(f) << endl ;

    double d = 3.1458 ;
    cout << "size of Double variable is : " << sizeof(d) << endl ;

    char c = 'k' ;
    cout << "size of Char variable is : " << sizeof(c) << endl ;

    bool b = 0 ;
    cout << "size of Bool variable is : " << sizeof(b) << endl ;

    // We have some Data type Modifiers :
    //      keyword         size (bytes)     
    //      signed          4 
    //      unsigned        4
    //      long            8 
    //      short           2

    long int  li = 100 ;
    cout << "size of 'long Int' is : " << sizeof(li) << endl ;
    
    short int si = 01 ;
    cout << "size of 'short Int' is : " << sizeof(si) << endl ;

    return 0;
}