// Basic Strucutre of a C++ Program 
// Source => CWH Playlist Videos : 2 , 3 
// Date : 18 / 1 / 24
#include<iostream> // Header file => "iostream" (Input.Output.Stream)
using namespace std; // the namespace helps in avoiding the ambiguity that may occur when two identifiers have the same name.

int main(){ // The main() defines the entry or the starting point of the C/C++ program code.

    cout << "Jai Shree Krishna !" << endl ; // Output Stream show "Jai Shree Krishna !" on screen.

    // Variables : variables are lika a container , contain specific type of values !
    int i ; // int is a integer type variable , contains integer values like "9" , "-9" , "5" etc.
    float pi = 3.14 ; // float is floating points variable , contains floating values like "3.14" , "0.005" etc.
    char fav_character = 'I' ; // char is character type variable , contains character valueslike 'c' , 'x' , 'P' etc.
    
    // Example :
    int age ;
    cout << "Enter Your Age : " ;
    cin >> age ; // Input stream , input data from keyboard by user !
    cout << "Your age is : " << age << endl ; // endl => "end of line" : its working is similar to the '\n' escape sequence.

    // Comments : used to explain c++ code , and to make it more readable . 
    // this is a Single line comment !
    /* this is a
    multi-line 
    comment ! */

    return 0;
        /* 
        return 0 in the main function means that the program executed successfully.
        return 1 in the main function means that the program does not execute successfully
        and there is some error.
        */

}
 