// Date : 6/2/24
// Structures, Unions 7 enums in C++ by code with harry .
// Turtorial #14
#include<iostream>
using namespace std ;

// Struct 
    typedef struct Student
    {
        /* data */
        int id ;      // use 4 bytes 
        string name ; // use 24 bytes
        float fees ;  // use 4 bytes 
    } stu ;

int main(){
    struct Student harsh ;
    struct Student naman ;
    stu aman ; // by using typedef !

    harsh.id = 5 ;
    harsh.name = "Harsh" ;
    harsh.fees = 1200 ;

    cout << sizeof(bool) << endl ;

    // naman.id = 6 ;
    // naman.name = "Naman" ;
    // naman.fees = 1250 ;

    // aman.id = 1 ; 
    // aman.name = "Aman";
    // aman.fees = 1000 ;

    // cout << "Harsh Data : " << endl ;
    // cout << "Harsh Id : "   <<  harsh.id   << endl ;
    // cout << "Harsh Name : " <<  harsh.name << endl ;
    // cout << "Harsh Fees : " <<  harsh.fees << endl ;

    // cout << "Naman Data : " << endl ;
    // cout << "Naman Id : "   <<  naman.id   << endl ;
    // cout << "Naman Name : " <<  naman.name << endl ;
    // cout << "Naman Fees : " <<  naman.fees << endl ;

    // cout << "Aman Data : " << endl ;
    // cout << "Aman Id : "   <<  aman.id   << endl ;
    // cout << "Aman Name : " <<  aman.name << endl ;
    // cout << "Aman Fees : " <<  aman.fees << endl ;

    // Error ! : very confusing video for understand this topics :
    // we use other videos and understand struct , union and enum !

    return 0;
}