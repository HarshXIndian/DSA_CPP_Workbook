// Date : 5/2/24 
// Cwh : break and continue Statements in C++ . Tutorial 11
#include<iostream>
using namespace std;

int main(){
    // Break statement :
    for(int i = 1 ; i < 5 ; i++ ){
        if(i == 2){
            break ; // now whenever value of i become i , so its exit from if loop !
        }
        cout << i << endl ;
    }
    
    // Continue Statement :
    for(int i = 1 ; i < 5 ; i++ ){
        if( i ==2 ) {
            continue; // it skip this iteration aur term for particular iteration hence in output 2 will be not shown .
        }
        cout << i << endl ;
    }
    return 0;
}