// Introduction to Structures in C : by Neso Acedemy 
#include<iostream>
#include<string>
using namespace std ;


// A 'Structure' is a user defined data type that can be used to group elements of diffrent types into a single type !4
// Structures are there declared in global scope so they can access by any of function like main funtion !

    // Declaration :
    // Declaration : 1
    // struct keyword
    // {
    //     /* data */
    //     data_type variable_name_1 ;
    //     data_type variable_name_2 ;
    //      .
    //      .
    //      .
    //      data_type variable_name_N ;
    // } variables of struct type ;

    struct
    {
        /* data */
        string engine ;
        string fuel_type ;
        int fuel_tank_cap ;
        int seating_cap ;
        float city_mileage ;
    } car1 , car2 ;

    // Declaration : 2
    // struct Struct_name
    // {
    //     /* data */
    //     data_type variable_name ;
    // };

    // struct car 
    // {
    //     string engine ;
    // } ;

    // Declaration 2 (a)
    struct car 
    {
        string engine ;
    } car_2 ;

    // Declaration 2 (b)
    // typedef struct car 
    // {
    //     string engine ;
    // } c ;

int main(){
    // Accessing declaration 1 :
    car1.engine = "DDis 190 Engine" ;
    car2.engine = "1.2 L Kappa Dual VTVT" ;

    // car1 and car2 can access all members of struct ! 
    // we access member of structure by use (.) dot product !

    // // Accessing declaration 2 :
    // struct car car_1 ; // here we manually create a variable of struct type 'car_1' .
    // car_1.engine = "Car_1 L Single VT Engine" ;

    // // Accessing declaration 2(a) :
    car_2.engine = "Car_2 L Single VT Engine" ; // here we dont have to declare a variable as it is already created with intialiation !

    // // Accessing declaration 2(b) :
    // c car_3 ; // here we use typedef and instead of writing struct bla bla we have to use only c !
    // car_3.engine = "Car_3 L Single VT Engine" ;

    cout << car1.engine << endl ;
    cout << car2.engine << endl ;
    // cout << car_1.engine << endl ;
    cout << car_2.engine << endl ;
    // cout << car_3.engine << endl ;
    return 0 ;
}