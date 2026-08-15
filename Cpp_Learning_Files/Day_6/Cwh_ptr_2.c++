// Cwh : Arrays & Pointers Arithmetic :
// Tutorial #13 
#include<iostream>
using namespace std ;

int main(){
    // Array :  
    int marks[4] = {24, 45, 63, 56};
    cout <<  "The value of marks[0] is : " << marks[0] << endl ; // first value => 24 as array start with 0 ;
    cout <<  "The value of marks[1] is : " << marks[1] << endl ; // 2nd value => 45
    cout <<  "The value of marks[2] is : " << marks[2] << endl ; // 63
    cout <<  "The value of marks[3] is : " << marks[3] << endl ; // 56
    cout << endl ;

    marks[2] = 70 ; // we can change the value !
    cout <<  "The value of marks[0] is : " << marks[0] << endl ; // 24
    cout <<  "The value of marks[1] is : " << marks[1] << endl ; // 45
    cout <<  "The value of marks[2] is : " << marks[2] << endl ; // 70 as it is changed .
    cout <<  "The value of marks[3] is : " << marks[3] << endl ; // 56
    cout << endl ;

    // accessing marks by using loop :
    for(int i = 0 ; i < 4 ; i++ ){
        cout << "The value of marks is : " << marks[i] << endl ;
    };

    // accessing marks array with pointer :
    int *ptr = marks ; // it store the address of first element of array which is : marks[0]
    // marks is by default a pointer or we can say 'indexing pointer' points to the first element of array marks[4] .
    cout << *ptr << endl ; // it provide the value at first position in array as it points first element of array , marks[0] which hold the value 24
    ptr++ ; // now it points to next element of array which is marks[0+1] = marks[1] 
    cout << *ptr << endl ; // marks[1] = 45 
    ptr = ptr + 2 ; // marks[1] = marks[1+2] => marks[3]
    cout << *ptr << endl ; // marks[3] = 56 .

    // by using pointer and loop :
    ptr = marks ; // Re-assigning ptr !
    for(int  i = 0 ; i < 4 ; i++ ){
        cout << "The value of marks[] is : " << *ptr << endl ;
        ptr++ ;
    }
    return 0;
};