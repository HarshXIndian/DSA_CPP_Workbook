// Function Template & Function Template With Parameters In C++ 
// Tutorial #67
// Function templates are special functions that can operate with generic types. This allows us to create a function template ,
// whose functionality can be adapted to more than one type or class without repeating the entire code for each type.
#include<iostream>
using namespace std ;

// float multipication(int a,int b){
//     float mul = a * b ;
//     return mul ;
// };

// float multipication(float a,float b){
//     float mul = a * b ;
//     return mul ;
// };

// float multipication(float a,int b){
//     float mul = a * b ;
//     return mul ;
// };

// float multipication(int a,float b){
//     float mul = a * b ;
//     return mul ;
// };

// Syntax :
// template<class T>
// return_type function_name(argument_of_type_T){
//     // body of function 
// }

template <class T1,class T2>
float multipication(T1 a,T2 b){
    // float mul = a * b ;
    // return mul ;
    return (a*b);
};

int main(){
    float result ;
    result = multipication(5,7);
    cout << "The Multipication result is : " << result << endl ;
    return 0;
}