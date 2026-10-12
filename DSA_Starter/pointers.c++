#include<iostream>
using namespace std;

int main(){
    int ghar = 5 ;
    int *ghar_ka_address = &ghar ;

    cout << "Actually ghar ka address : " << &ghar << endl ;
    cout << "Ghar ka address by Pointer : " << ghar_ka_address << endl ;

    cout << "Actual value of ghar: " << ghar << endl ;
    cout << "Value at ghar by Pointer " << *(ghar_ka_address) << endl ;

    // POINTER TO POINTER 
    int **ghar_ka_address_ka_address = &ghar_ka_address ;

    cout << "ghar ka address: " << &ghar << endl ;
    cout << "ghar_ka_address ka address: " << &ghar_ka_address << endl ;
    cout << "value at pointer ghar_ka_address: " << *ghar_ka_address << endl ;
    cout << "value at pointer ka pointer ghar_ka_address_ka_address: " << **ghar_ka_address_ka_address << endl ;
    cout << "ghar_ka_address pointer store: " << ghar_ka_address << endl ;
    cout << "ghar_ka_address_ka_address pointer to pointer store: " << ghar_ka_address_ka_address << endl ;

    return 0 ;
}