// Date : 5/2/24
// Cwh : while , for , Do-While loops . Tutorial => 10 

#include<iostream>
using namespace std ;

int main(){
    // Loops in C++ are three types :

    // 1. For loop :
    // for ( initialization ; condition ; updation )
    // {
    //     /* code */
    // };
    cout << "Enter the number for print that number table By using FOR LOOP : " ;
    int val ;
    cin >> val ;
    cout << "Table of "<< val << " is : " ;
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        cout << val * i << " " ;
    };
    cout << endl ;
    
    // 2. While loop :
    // while (/* condition */)
    // {
    //     /* code */
    // }
    cout << "Enter the number for print that number table By using While LOOP : " ;
    int i = 1 ;
    cin >> val ;
    cout << "Table of " << val << " is : " ;
    while(i <= 10){
        cout << val * i << " " ;
        i++ ;
    };
    cout << endl ;

    // 3. Do While loop :
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    cout << "Enter the number for print that number table By using DO-While LOOP : " ;
    cin >> val ;
    i = 1 ;
    cout << "Table of "<< val << " is : ";
    do{
        cout << val * i << " " ;
        i++ ;
    }while(i <= 10);
    cout << endl ;

    return 0 ;
}
