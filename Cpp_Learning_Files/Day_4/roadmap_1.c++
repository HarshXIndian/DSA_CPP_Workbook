// Basci Oeprations in C++ by C++ Roadmap ! , day_4 ;
// Date : 21/1/24
#include<iostream>
using namespace std ;
int main(){

    int a = 5 ;
    int b = 10 ;

    // 1. Arithmetic Operator in C++ :

    /* Arithmetic operators are used to perform mathematical operations with basic variables
    such as integers and floating-point numbers. Here is a brief summary of the different
    arithmetic operators in C++: */

    // a. Addition Operator (+) : It adds two numbers together.
    int sum = a + b ;

    // b. Subtraction Operator (-) : It subtracts one number from another.
    int difference = a - b;

    // c. Multiplication Operator (*) : It multiplies two numbers together.
    int product = a * b;

    // d. Division Operator (/) : 

    /* It divides one number by another. Note that if both operands are integers, 
    it will perform integer division and the result will be an integer. */

    int quotient = a / b; // integer division
    // float quotient_f = (float(a) / float(b)); // floating-point division

    // e. Modulus Operator (%) : It calculates the remainder of an integer division.

    int remainder = a % b;

    // f. Increment Operator (++) : 
    /* It increments the value of a variable by 1. There are two ways to use this operator: prefix (++x) and postfix (x++).
    Prefix increments the value before returning it, whereas postfix returns the value first and then increments it. */

    int x = 5;
    int y = ++x; // x = 6, y = 6
    int z = x++; // x = 7, z = 6

    // g. Decrement Operator (--) : It decrements the value of a variable by 1. It can also be used in prefix (--x) and postfix (x--) forms.

    x = 5 ;
    y = --x; // x = 4, y = 4
    z = x--; // x = 3, z = 4
    
    // These are the basic arithmetic operators in C++ that allow you to perform 
    // mathematical operations on your variables. Use them in combination with other 
    // control structures, such as loops and conditionals, to build more complex programs.

    // 2. Logical Operators in C++ :

    // Logical operators are used to perform logical operations on the given
    // expressions, mostly to test the relationship between different variables or 
    // values. They return a boolean value i.e., either true (1) or false (0) based on
    // the result of the evaluation.

    // C++ provides the following logical operators:

    // a. AND Operator (&&) :  The AND operator checks if both the operands/conditions are true, then the expression is true. 
    // If any one of the conditions is false, the whole expression will be false.
    // (expression1 && expression2)
    // Example:
    a = 5, b = 10;
    if (a > 0 && b > 0) {
        cout << "Both values are positive." << endl;
    } ;

    // b. OR Operator (||) : The OR operator checks if either of the operands/conditions are true, then the expression is true. If both the conditions are false, it will be false.
    // (expression1 || expression2)
    // Example:
    a = 5, b = -10;
    if (a > 0 || b > 0) {
        cout << "At least one value is positive." << endl;
    }

    // c. NOT Operator (!) The NOT operator reverses the result of the condition/expression it is applied on. If the condition is true, the NOT operator will make it false and vice versa.
    // !(expression)
    // Example:
    a = 5;
    if (!(a < 0)) {
        cout << "The value is not negative." << endl;
    }

    // 3. Bitwise Operations :
    // Bitwise operations are operations that directly manipulate the bits of a number.
    // Bitwise operations are useful for various purposes, such as optimizing algorithms,
    // performing certain calculations, and manipulating memory in lower-level programming languages like C and C++.
    // Here is a quick summary of common bitwise operations in C++:

    // a. Bitwise AND (&)
    // The bitwise AND operation (&) is a binary operation that takes two numbers,
    // compares them bit by bit, and returns a new number where each bit is set (1) 
    // if the corresponding bits in both input numbers are set (1); otherwise, the bit is unset (0).
    // Example:
    int result = 5 & 3; // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)

    // b. Bitwise OR (|) 
    // The bitwise OR operation (|) is a binary operation that takes two numbers, 
    // compares them bit by bit, and returns a new number where each bit is set (1) 
    // if at least one of the corresponding bits in either input number is set (1); 
    // otherwise, the bit is unset (0).
    // Example: 
    result = (5 | 3); // result will be 7 (0000 0101 | 0000 0011 = 0000 0111)

    // c. Bitwise XOR (^)
    // The bitwise XOR (exclusive OR) operation (^) is a binary operation that takes two numbers,
    // compares them bit by bit, and returns a new number where each bit is set (1) 
    // if the corresponding bits in the input numbers are different; otherwise,
    // the bit is unset (0).
    // Example:
    result = (5 ^ 3); // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)

    // d. Bitwise NOT (~)
    // The bitwise NOT operation (~) is a unary operation that takes a single number,
    // and returns a new number where each bit is inverted (1 becomes 0, and 0 becomes 1).
    // Example:
    result = ~5; // result will be -6 (1111 1010)

    // e. Bitwise Left Shift (<<)
    // The bitwise left shift operation (<<) is a binary operation that takes two numbers,
    // a value and a shift amount, and returns a new number by shifting the bits of 
    // the value to the left by the specified shift amount. The vacated bits are filled with zeros.
    // Example:
    result = 5 << 1; // result will be 10 (0000 0101 << 1 = 0000 1010)

    // f. Bitwise Right Shift (>>)
    // The bitwise right shift operation (>>) is a binary operation that takes two numbers,
    // a value and a shift amount, and returns a new number by shifting the bits of 
    // the value to the right by the specified shift amount. The vacated bits are 
    // filled with zeros or sign bit depending on the input value being signed or unsigned.
    // Example:
    result = 5 >> 1; // result will be 2 (0000 0101 >> 1 = 0000 0010)
}
