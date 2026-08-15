// 14 Aug 2026 

// vs code - editor 
// mingw - compiler 

// iostream - stream - ip/op
// #include - preprocessor directive adding the iostream header file to the program
#include<iostream>
using namespace std;

// int main is the entry point of the program
// {} are the body of the function where { is the opening brace and } is the closing brace
// using namespace std is used to avoid writing std:: before every standard library function

int main(){
    // code will be executed from here :

    // cout is the standard output stream object used to print output to the console 
    cout<<"Hello, World!"<<endl;
    // endl is the end of line character used to print a new line after the output 

    cout << "Hello, My name is Harsh Indian , i am a student" << endl;
    cout << 21 << " years old" << endl;

    // comments in c++ are used to explain the code and make it more readable
    // this is the example of single line comment
    /* this is the example 
    of multi line comment */

    // data types : 

    // int - integer data type used to store whole numbers 
    // size of integer data type is 4 bytes in 64 bit system and 2 bytes in 32 bit system
    // range of integer data type is -2,147,483,648 to 2,147,483,647 in 64 bit system and -32,768 to 32,767 in 32 bit system , 2 to the power of 31 -1 and 2 to the power of 15 -1 respectively
    int x = 5 ; // here x is the variable of integer data type and 5 is the value assigned to it 
    x = 5 ;
    cout << "The value of x is : " << x << endl;
    int z ; 
    cout << z << endl; // here z is the variable of integer data type but it is not initialized with any value so it will print garbage value

    int c = 10000000000000 ; 
    cout << c << endl; // here c is the variable of integer data type but it is initialized with a value which is out of range of integer data type so it will print garbage value

    // we can use long long data type to store larger whole numbers than int data type
    long long d = 1000000000000000000 ; 
    cout << d << endl; // here d is the variable of long long data type and it is initialized with a value which is within the range of long long data type so it will print the value

    // char - character data type used to store single characters
    // range of char data type is -128 to 127 in 64 bit system and -128 to 127 in 32 bit system , 2 to the power of 7 -1 respectively
    char a = 'a' ; // here a is the variable of character data type and 'a' is the value assigned to it
    char b = ' ' ; // here b is the variable of character data type and ' ' is the value assigned to it which is a space character
    char c = '*' ; // here c is the variable of character data type and '*' is the value assigned to it which is a special character
    char d = '0' ; // here d is the variable of character data type and '0' is the value assigned to it which is a digit character 

    cout << "The value of a is : " << a << endl; // it will print the value of a which is 'a'
    cout << "The value of b is : " << b << endl; // it will print the value of b which is ' ' (space character)
    cout << "The value of c is : " << c << endl; // it will print the value of c which is '*' (special character)
    cout << "The value of d is : " << d << endl; // it will print the value of d which is '0' (digit character)

    // boolean - boolean data type used to store true or false values
    // range of boolean data type is 0 to 1
    // in boolean 1 repersents true and 0 represents false
    bool t = true ; // here t is the variable of boolean data type and true is the value assigned to it
    bool f = false ; // here f is the variable of boolean data type and false is the value assigned to it
    cout << "The value of t is : " << t << endl; // it will print the value of t which is 1 (true)
    cout << "The value of f is : " << f << endl; // it will print the value of f which is 0 (false)

    // long - long integer data type used to store whole numbers with more precision
    // size of long data type is 8 bytes in 64 bit system and 4 bytes in 32 bit system
    // long is also integer but it can store larger whole numbers than int data type 
    // range of long data type is -2,147,483,648 to 2,147,483,647 in 64 bit system and -32,768 to 32,767 in 32 bit system , 2 to the power of 31 -1 and 2 to the power of 15 -1 respectively
    long e = 1000000000 ; // here e is the variable of long data type and 1000000000 is the value assigned to it
    cout << "The value of e is : " << e << endl; // it will print the value of e which is 1000000000
    
    // long long - long long integer data type used to store whole numbers with even more precision
    // it is also integer but it can store larger whole numbers than long data type
    // size of long long data type is 8 bytes in 64 bit system and 4 bytes in 32 bit system
    // range of long long data type is -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 in 64 bit system , 2 to the power of 63 -1 respectively
    long long g = 1000000000000000 ; // here g is the variable of long long data type and 1000000000000000 is the value assigned to it
    cout << "The value of g is : " << g << endl; // it will print the value of g which is 1000000000000000

    // float - floating point data type used to store decimal numbers
    // size of float data type is 4 bytes in 64 bit system and 4 bytes in 32 bit system
    // range of float data type is 1.17549e-38 to 3.40282e+38 in 64 bit system and 1.17549e-38 to 3.40282e+38 in 32 bit system , 2 to the power of -126 to 2 to the power of 128 respectively
    float f1 = 3.14 ; // here f1 is the variable of float data type and 3.14 is the value assigned to it
    cout << "The value of f1 is : " << f1 << endl; // it will print the value of f1 which is 3.14

    // double - double precision floating point data type used to store decimal numbers with more precision
    // size of double data type is 8 bytes in 64 bit system and 8 bytes in 32 bit system
    // range of double data type is 2.22507e-308 to 1.79769e+308
    double d1 = 3.14159 ; // here d1 is the variable of double data type and 3.14159 is the value assigned to it
    cout << "The value of d1 is : " << d1 << endl; // it will print the value of d1 which is 3.14159

    // string - string data type used to store a sequence of characters
    // size of string data type is 24 bytes in 64 bit system and 24 bytes in 32 bit system
    // range of string data type is 0 to 2,147,483,647 in 64 bit system and 0 to 2,147,483,647 in 32 bit system , 2 to the power of 31 -1 respectively
    string str = "Hello, World!" ; // here str is the variable of string data type and "Hello, World!" is the value assigned to it
    cout << "The value of str is : " << str << endl; // it will print the value of str which is "Hello, World!"

    return 0; // code had compiled successfully and the program has ended successfully
}