// I/O in c++ 
// Date : 19 / 1 / 24
#include<iostream>
using namespace std ;

int main(){
    int n1,n2 ;
    cout << "Enter the number 1 : " << endl; // '<<' is called Insertion Operator or output operator.
    cin >> n1 ; // '>>' is called Extraction Operator or input operator.

    cout << "Enter the number 2 : " << endl ; // cout is standard output object 
    cin >> n2 ; // cin is standard input object

    cout << "Sum of numbers is : " << n1 + n2 << endl ;
    return 0;
}

// Date : 09 / 05 / 24
// int main(){
//     int n1,n2 ;
//     cout << "enter the number one : " << endl ;
//     cin >> n1 ;
//     cout << "enter the number two : " << endl ;
//     cin >> n2 ;
//     cout << "Sum of both numbers are : " << n1 + n2 << endl ;
//     return 0;
// }