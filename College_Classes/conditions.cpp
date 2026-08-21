// 19 Aug 2026 , if, if else, if else if, nested if else  
#include<iostream>
using namespace std;

int main(){
    
    // if condition : is used to check a condition and if the condition is true then it will execute the code inside the if block otherwise it will not execute the code inside the if block. 
    int x = 10 ;
    if ( x > 5 ){
        cout << "x is greater than 5" << endl ;
    }
    // above code will check if x is greater than 5 or not if it is true then it will print "x is greater than 5" otherwise it will not print anything.

    // if else condition : is used to check a condition and if the condition is true then it will execute the code inside the if block otherwise it will execute the code inside the else block.
    int y = 3 ;
    if ( y > 5 ){
        cout << "y is greater than 5" << endl ;
    }
    else {
        cout << "y is less than or equal to 5" << endl ;
    }
    // Above code will check if y is greater than 5 or not if it is true then it will print "y is greater than 5" otherwise it will print "y is less than or equal to 5".
    // we use if else instead of if condition because if we use if condition then it will check the condition and if it is false then it will not execute the code inside the if block and it will not execute the code inside the else block also but if we use if else then it will check the condition and if it is false then it will execute the code inside the else block.
    
    // if else if condition : is used to check multiple conditions and if the first condition is true then it will execute the code inside the if block otherwise it will check the next condition and if it is true then it will execute the code inside the else if block otherwise it will check the next condition and so on until it finds a true condition or it will execute the code inside the else block if all the conditions are false.
    int z = 7 ;
    if ( z > 10 ){
        cout << "z is greater than 10" << endl ;
    }
    else if ( z > 5 ){
        cout << "z is greater than 5 but less than or equal to 10" << endl ;
    }
    else {
        cout << "z is less than or equal to 5" << endl ;
    }
    // Above code will check if z is greater than 10 or not if it is true then it will print "z is greater than 10" otherwise it will check if z is greater than 5 or not if it is true then it will print "z is greater than 5 but less than or equal to 10" otherwise it will print "z is less than or equal to 5".
    // in real life we use if else if condition to check multiple conditions and execute the code accordingly. like checking grades of a student, traffic lights can be controlled using if else if condition, checking the age of a person to give them a ticket for a movie, checking the temperature to turn on the AC or heater etc.

    // if else if ladder : is used to check multiple conditions and if the first condition is true then it will execute the code inside the if block otherwise it will check the next condition and if it is true then it will execute the code inside the else if block otherwise it will check the next condition and so on until it finds a true condition or it will execute the code inside the else block if all the conditions are false.
    int d = 15 ;
    if ( d > 20 ){
        cout << "d is greater than 20" << endl ;
    }
    else if ( d > 15 ){
        cout << "d is greater than 15 but less than or equal to 20" << endl ;
    }
    else if ( d > 10 ){
        cout << "d is greater than 10 but less than or equal to 15" << endl ;
    }
    else {
        cout << "d is less than or equal to 10" << endl ;
    }
    // Above code will check if d is greater than 20 or not if it is true then it will print "d is greater than 20" otherwise it will check if d is greater than 15 or not if it is true then it will print "d is greater than 15 but less than or equal to 20" otherwise it will check if d is greater than 10 or not if it is true then it will print "d is greater than 10 but less than or equal to 15" otherwise it will print "d is less than or equal to 10".
    
    // Here is the difference between if else if and if else if ladder :
    // if else if : A single conditional chain where each else if is directly connected to the previous if. Only one condition is executed - once a condition is true, the rest are skipped. This is efficient when you have mutually exclusive conditions.

    // if else if ladder : A series of if statements, each with its own else. Each if is independent - multiple blocks can be executed if their conditions are true. This is useful when you want to check multiple conditions that are not mutually exclusive.

    // Q1 : Write a C++ program that takes three numbers as input from the user and determines the largest number using conditional statements ... 

    double a,b,c,largest ;
    cout << "Enter the three numbers : " ;
    cin >> a >> b >> c ;

    if ( a > b && a > c ){
        largest = a ;
    }
    else if ( b > a && b > c ){
        largest = b ;
    }
    else {
        largest = c ;
    }
    cout << "The largest number is : " << largest << endl ;

    // Using ternary operator to find the largest number among three numbers ...
    largest = ( a > b && a > c ) ? a : ( b > a && b > c ) ? b : c ;
    cout << "The largest number using ternary operator is : " << largest << endl ;

    // Q2 : Write a C++ program to check whether a given year is a leap year or not.
    int year ;
    cout << "Enter a year : " ;
    cin >> year ;

    if ( year % 4 == 0 && ( !(year % 100 == 0) || (year % 400 == 0) ) ){
        cout << year << " is a leap year." << endl ;
    }
    else {
        cout << year << " is not a leap year." << endl ;
    }

    // Explaination : A year is a leap year if it is divisible by 4 but not divisible by 100 unless it is also divisible by 400. This means that if a year is divisible by 4 and not divisible by 100, it is a leap year. However, if a year is divisible by 100, it must also be divisible by 400 to be considered a leap year. For example, the year 2000 is a leap year because it is divisible by 400, while the year 1900 is not a leap year because it is divisible by 100 but not by 400.

    if ( year % 4 == 0 ){
        if(!(year % 100 == 0) || (year % 400 == 0)){
            cout << year << " is a leap year." << endl ;
        }
        else {
            cout << year << " is not a leap year." << endl ;
        }
    }
    else {
        cout << year << " is not a leap year." << endl ;
    }

    return 0 ;
}