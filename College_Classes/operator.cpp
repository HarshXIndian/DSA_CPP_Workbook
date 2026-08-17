// Operators in cpp 
#include<iostream>
using namespace std;
int main(){
    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "Addition: " << a + b << endl; // This will give the sum of a+b which is 15
    cout << "Subtraction: " << a - b << endl; // This will give the difference of a-b which is 5
    cout << "Multiplication: " << a * b << endl; // This will give the product of a*b which is 50
    cout << "Division: " << a / b << endl; // This will give the quotient of a/b which is 2
    // Modulus Operator
    cout << "Modulus: " << a % b << endl; // This will give the remainder of a/b which is 0
    int x = 11, y = 7 ;
    cout << "Modulus: " << x % y << endl; // This will give the remainder of x/y which is 4

    // practice case :
    int k = -3 , l = 2 ;
    cout << "Modulus: " << k % l << endl; // This will give the remainder of k/l which is -1
    l = -2 ;
    cout << "Modulus: " << k % l << endl; // This will give the remainder of k/l which is -1
    k = 3 , l = -2 ;
    cout << "Modulus: " << k % l << endl; // This will give the remainder of k/l which is 1

    // Note : we can not divide by zero in c++ as it will give an error. like x/0 always gives an error. So we can not use 0 in division or modulus operator. It is a logical error.
    int z = 0 ;
    // cout << "Division by zero: " << a / z << endl; // This will give an error as we can not divide by zero 
    // cout << "Modulus by zero: " << a % z << endl; // This will give an error as we can not divide by zero

    // Binary Operator 
    // These operators deal with binary operations and 0 and 1 ... 
    // AND Operator : returns 1 if both bits are 1 else returns 0 ( boths the condition should be true )
    // T & T = T
    // T & F = F
    // F & T = F
    // F & F = F

    int m = 5, n = 3;
    cout << "AND Operator: " << (m & n) << endl; // This will give the result of bitwise AND operation which is 1
    // OR Operator : returns 1 if any one of the bits is 1 else returns 0 ( any one condition should be true )
    // T || T = T
    // T || F = T
    // F || T = T
    // F || F = F
    cout << "OR Operator: " << (m | n) << endl; // This will give the result of bitwise OR operation which is 7

    // XOR Operator : returns 1 if both bits are different else returns 0 ( both condition should be different )
    // T ^ T = F
    // T ^ F = T
    // F ^ T = T
    // F ^ F = F
    // In case of three conditions 
    // T ^ T ^ T = F
    // T ^ T ^ F = T
    // T ^ F ^ T = F
    // T ^ F ^ F = T
    // F ^ T ^ T = F
    // F ^ T ^ F = T
    // F ^ F ^ T = T
    // F ^ F ^ F = F
    cout << "XOR Operator: " << (m ^ n) << endl; // This will give the result of bitwise XOR operation which is 6

    // Not Operator : returns 1 if the bit is 0 else returns 0 ( it will reverse the condition )
    // !T = F
    // !F = T
    cout << "NOT Operator: " << (~m) << endl; // This will give the result of bitwise NOT operation which is -6

    // Question : we are given integer t , to find the given number is even or odd using bitwise operator.
    // Using bitwise operator :
    int t = 3 ;
    if (t & 1) {
        cout << "The number is odd." << endl;
    } else {
        cout << "The number is even." << endl;
    }
    // explaining the above code : we are using the AND operator to check if the last bit of the number is 1 or 0. If it is 1 then the number is odd else it is even. Here we used & operator to check if the last bit is 1 or 0. If the last bit is 1 then the number is odd else it is even. like as value of t is 3 which is 11 in binary and the last bit is 1 so the number is odd. If the value of t is 4 which is 100 in binary and the last bit is 0 so the number is even.

    // Using modulas :
    int u = 5;
    if (u % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    // explaination : we are using the modulus operator to check if the number is divisible by 2 or not. If it is divisible by 2 then the number is even else it is odd. Here we use reminder to check if the number is even or odd. If the reminder is 0 then the number is even else it is odd. like here value of u is 5 which is not divisible by 2 so the number is odd. If the value of u is 6 which is divisible by 2 so the number is even.

    return 0 ;
}