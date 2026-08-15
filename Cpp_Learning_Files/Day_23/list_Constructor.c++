// Tutorial #49 
// Date : 24/02/2024
// Initalizing list in Constructor By Code with harry !

#include<iostream>
using namespace std;

/*
Syntax for Initalizing list in constructor :
constructor (argument-list) : initalization-section 
{
    assignment + other code ;
}

class Test {
    int a ;
    int b ;
    public :
        Test(int i,int j) : a(i) , b(j) {
            constructor-body ;
        }
};

here in line number '19' , i is assign to a and j assign to b .
hence istead of assign this values in constructor body we can use this property !
many use cases we will disccess further :

*/

class Test {
    int a ;
    int b ;
    public :
        // Test(int i,int j) : a(i) , b(j) {
        // Test(int i,int j) : a(i) , b(i+j) {
        // Test(int i,int j) : a(i) , b(2 * j) {
        // Test(int i,int j) : a(i) , b(a * j) {
        // Test(int i,int j) : b(j) , a(i + b) { // throw garbage value as 'a' will be initalize first 
        // Test(int i,int j) : a(i + b) , b(j) { // show garbage value in value of a as , b is not initialized when a is try to access it !
        Test(int i,int j) : a(i) { 
            b = j ;
            cout << "Initalizing list in Constructor !" << endl ;
            cout << "Value of a is : " << a << endl ;
            cout << "Value of b is : " << b << endl ;
        };
};

int main(){
    Test t(2,4) ;
    return 0;
}