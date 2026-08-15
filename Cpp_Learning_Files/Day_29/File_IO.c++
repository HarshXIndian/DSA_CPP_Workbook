// Tutorial #61
// Date : 2/3/24
// File IO in C++ Read and Write Operration on same program & closing files 

#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    // Connecting our file with out stram 
    ofstream out("exp.txt");

    // Creating a name string and filling it with the string entered by the user 
    string name ;
    cout << "Enter Your Name : ";
    cin >> name ;

    // Writing a string to the file :
    out << "My Name is : " << name ;

    // Closing the file !
    out.close();

    // Connecting our file with in stram 
    ifstream in("exp.txt");

    // Creating a Content string and filling it with the data taking from the file 
    string content ;

    // Reading content of the file :
    // in >> content ;
    getline(in,content);
    cout << content << endl ;

    // Closing the file !
    in.close();

    return 0 ;
};