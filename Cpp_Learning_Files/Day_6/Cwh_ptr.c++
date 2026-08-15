// Date : 5/2/24
// Pointers by Code with Harry 
// Turtorial : #12

#include<iostream>
using namespace std ;

int main(){
    // Pointers : data types that holds the address of other data types !
    // Declaration : using (*) symbol !
    int ghar = 5 ;
    int* ghar_ka_address = &ghar ;

    // & ---> (Address of) Operator 
    cout << "Actually ghar ka address : " << &ghar << endl ;
    cout << "Ghar ka address by pointer : " << ghar_ka_address << endl ; // using (address of) operator we can access the address of variable !

    // * ---> Derefrencing Operator 
    cout << "Actual value of ghar : " << ghar << endl ;
    cout << "Value at ghar by pointer : " << *(ghar_ka_address) << endl ; // using derefrence operator we can access value at address !

    // Pointer to Pointer :
    // ptr to ptr : store the address of an pointer ! 
    // Declaration : by using double * => **ghar_ka_address_ka_address : store the address of ghar_ka_address ka address ! :)
    int** ghar_ka_address_ka_address = &ghar_ka_address ;

    cout << "Ghar ka address store karta hai , ghar_ka_address pointer . \nghar_ka_address pointer ka address store krta hai,\nghar_ka_addresss_ka_address pointer to pointer ." << endl ;
    cout << "Ghar ka address : " << ghar_ka_address << endl ;
    cout << "Ghar_ka_address ka address : " << ghar_ka_address_ka_address << endl ;

    cout << "value at variable ghar : " << ghar << endl ;
    cout << "value at pointer ghar_ka_address : " << *ghar_ka_address << endl ;
    cout << "value at pointer to pointer ghar_ka_address_ka_address : " << **ghar_ka_address_ka_address << endl ;

    cout << "ghar variable store : " << ghar << endl ;
    cout << "ghar_ka_address Pointer store : " << ghar_ka_address << ", which is address of ghar variable !"<< endl ;
    cout << "ghar_ka_address_ka_address Pointer to pointer store : " << ghar_ka_address_ka_address << ", which is address of ghar_ka_address pointer ."<< endl ;
    return 0;
}
