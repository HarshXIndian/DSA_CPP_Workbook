#include<iostream>
using namespace std;

int main(){
    int arr[] = {24,45,63,56} ;
    for( int i = 0 ; i < 4; i++ ){
        cout << arr[i] << endl ;
    }

    int *ptr = arr; // it store the address of first el of array which is arr[0] 
    cout << *ptr << " " << arr[0] << endl; 

    ptr++ ;
    cout << *ptr << " " << arr[1] << endl;

    ptr = ptr + 2 ; // ptr = 2 + 1 ; 
    cout << *ptr << " " << arr[1+2] << endl;
    
    return 0 ;
}