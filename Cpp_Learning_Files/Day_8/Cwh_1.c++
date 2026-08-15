// Date : 7/2/24
// Cwh : Inline funcions , Default Arguments ... 
// Tutorial #17
#include<iostream>
using namespace std ;

// ------------------> INLINE FUNCTION 

// Non - Inline Function :
int sum(int a,int b){
    return (a + b) ;
};

// Inline Funtion :
inline int sub(int m, int n){
    return (m - n) ;
};

// Rules :
// 1. dont use with static variables 
// 2. if fun contain loops and switch like statements so not use those fun as inline 
// 3. large number of statements if fun contain so also dont use those fun as inline function 


// ------------------> DEFAULT ARGULMENT

// int month is an default argument as if user dont pass the value of month so it by default use the "24" value !
float emi_amount(int amount , int months = 24 ){ 
    return (amount / months) ;
} ;

// Rules :
// 1. use default argument at last , and compulsory variable first as amount is compulsory and default lastly !

int main(){
    int x , y ;
    cout << "Enter value 1  : ";
    cin >> x ;
    cout << "Enter value 2  : ";
    cin >> y ;
    // whenever its above statement sum(x,y) executes it call the fun int sum(int a, int b) which is good if those function will call some times !
    // but if we have to call sum(int a, int b) many times so it is not good to call everytime , as it add up extra time !
    // these calls take a bit much time as the actual parmeters copied by formals and than execution and return the value by called fun !
    // like we call them 5 times :
    cout << "Sum of values is : " << sum(x,y) << endl ;
    cout << "Sum of values is : " << sum(x,y) << endl ;
    cout << "Sum of values is : " << sum(x,y) << endl ;
    cout << "Sum of values is : " << sum(x,y) << endl ;
    cout << "Sum of values is : " << sum(x,y) << endl ;

    // Instead we can use "inline function !"
    // it replace the code of called function in statements and save the time during execution !
    // it is good practice to use it if the called function have small number of statements as sum(int a,int b) have only one return statement !
    cout << "Sum of values is : " << sub(x,y) << endl ;
    cout << "Sum of values is : " << sub(x,y) << endl ;
    cout << "Sum of values is : " << sub(x,y) << endl ;
    cout << "Sum of values is : " << sub(x,y) << endl ;
    cout << "Sum of values is : " << sub(x,y) << endl ;

    // Default argument !
    int amount ;
    int months ;
    cout << "Low Cost Emi's : " << endl;
    cout << "Enter the product amount : " ;
    cin >> amount ;
    cout << "You have to pay Only Rs."<< emi_amount(amount) << " for 24 months ! \nFor this Product !" << endl ;
    cout << "You have to pay Only Rs."<< emi_amount(amount,12) << " for 12 months ! \nFor this Product !" << endl ;
    return 0;
}