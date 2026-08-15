// Tutorial #61
// Date : 2/3/24
// File IO in C++ Read and Write Operration on same program & closing files 

#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    ofstream out;
    out.open("exp.txt");
    out << "This line is write into file by using second method \nto open files in c++ !" << endl ;
    out.close();

    ifstream in("exp2.txt");
    string content ;
    // getline(in,content);
    while( in.eof() == 0){
        getline(in,content);
        cout << content << endl ;
    }
    in.close();

    return 0 ;
};