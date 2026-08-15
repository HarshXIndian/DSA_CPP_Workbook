// File IO : Reading and writing Operations on files in c++
// Tutorial #60

#include<iostream>
#include<fstream>
using namespace std;

/*--------------------------------------------------->
The useful classes for working with files in C++ are :
1. fstreambase
2. ifstream --> derived from fstreambase.
3. ofstream --> derived from fstreambase.

In Order to work with files in C++,
you will have to open it. Primarly,
there are 2 ways to open a file :
1. Using the constructor 
2. Using the member function open() of the class
<---------------------------------------------------*/

int main(){
    string input = "Harsh!" ;
    // string data_in ;
    // // Opening files using constructor and writing it :
    ofstream out("file_sample.txt"); // writing operation 
    out << input ;

    // Opening files using constructor and reading it :
    // ifstream in("sample_2.txt"); // Read operation 
    // in >> data_in ; it reads only first word as it not reads blank spaces or next line 
    // Hence we can use getline that read the full line !
    // getline(in, data_in);
    // cout << data_in ;
    return 0;
}