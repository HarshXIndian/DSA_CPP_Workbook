// Tutorial #50
// Date: 24/02/24
// Revisiting Pointer + new and delete Operators use !

#include<iostream>
using namespace std;

int main(){
    
    // Basic :
    int a = 5 ;
    int* pointer = &a ;
    // Pointer is nothing but it store the address of another varible !
    // *(pointer) => gives the value stored at the address of varible , stored in pointer !
    cout << "Value at the address of a is : " << *pointer << endl ;

    // new Operator !

    int* ptr = new int(2) ;
    // above line will create a int variable with value '2' and store variable address in pointer 'ptr' .
    cout << "The value at address ptr is : " << *ptr << endl ;

    int* arr = new int[3] ;
    // above line will create a array 'arr' with the size '3' . and store the address of first element in 'arr' pointer !
    arr[0] = 10 ;
    *(arr+1) = 20 ; // we can write it because arrays are stored in contiguos memory locations , hence by pointer arithmetic we can access next location of array !
    arr[2] = 30 ;

    cout << "Array Elements are : " << endl ;
    cout << "arr[0] is : "  << arr[0] << endl ;
    cout << "arr[1] is : "  << arr[1] << endl ;
    cout << "arr[2] is : "  << arr[2] << endl ;

    // delete Operator !
    // delete Operator is used to free the memory from the variables or arrays declared using new keyword !
    // it will delete the variable/array from memory !

    cout << "After Using Delete Operator ------------> " << endl ;
    // This Syntax will delete the array 'arr' from the memory !
    delete [] arr ;
    cout << "Array Elements are  : " << endl ;
    cout << "arr[0] is : "  << arr[0] << endl ;
    cout << "arr[1] is : "  << arr[1] << endl ;
    cout << "arr[2] is : "  << arr[2] << endl ;

    // This Syntax will delete the pointer ptr from the memory !
    delete ptr ;
    cout << "The value at address ptr is : " << *ptr << endl ;

    // Below declared code will not word as we try to delete an pointer which is not declared using new Operator !
    // delete pointer;
    // cout << "Value at the address of a is : " << *pointer << endl ;
    return 0;
}