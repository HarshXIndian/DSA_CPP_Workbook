//---------------------------------> Copy Constructor <---------------------------------

#include<iostream>
using namespace std ;   
class code{
    int id ;
    public:
    code(){
    id = 0  ;
    }   
    // code(int a){
    //     id = a;
    // }
    // code(code &x){
    //     id = x.id ;
    // }
    void display(){
        cout << "value of id is :" << id << endl ;
    }
};
int main(){
    code a;
    // code a(40);
    // code b(a) ;
    a.display();
    // b.display();
    
}

//---------------------------------> Array Of Objects <---------------------------------

// #include <iostream>
// using namespace std ;
// class employee{
//     int expirence ;
//     char name[20] ;
//     public :
//     void getdata() ;
//     void putdata() ;
// };
// void employee :: getdata()  //using scope resolution
// {
//     cout << "Enter Employee Name :" << endl ;
//     cin >> name ;
//     cout << "Expirence (in Years):" << endl ;
//     cin >> expirence ;
// }
// void employee :: putdata()
// {
//     cout << "Name : " << name << endl ;
//     cout << "Expirence : " << expirence << endl ;
// };

// int main(){
//     employee manager[3] ;
//     for(int i=0 ; i < 3 ; i++){
//         cout << "Details of manager " << i+1 << " is :" << endl;
//         manager[i].getdata();
//     }
//     for(int i=0 ; i < 3 ; i++){
//         cout << "Manager" << i+1 << "is :" ;
//         manager[i].putdata();
//     }
//     return 0;
// }

//---------------------------------> Parameterized Constructor <---------------------------------

// #include <iostream>
// using namespace std ;
// class pc{
//     int m,n ;
//     public:
//     pc(){};
//     pc(int date,int month,int year){
//         cout << "Your DOB is : " << date << "/" << month << "/" << year << endl ;
//     };
// };
// int main(){
//     pc(17,12,2004);
// }

//---------------------------------> Distructor <---------------------------------

// #include <iostream>
// using namespace std;
// class dc
// {
// public:
//     dc() { cout << "hey i am Constructor !" << endl ;}
//     void display() { cout << "Hello !" << endl ; }
//     ~dc() { cout << "ha ha ha i killed the constructor !!!" ;}
// };
// int main(){
//     dc obj ;
//     obj.display();
//     obj.display();
//     obj.display();
// }

//----------------------------------> using write() <---------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     // Data to be written (an array of characters)
//     char data[] = "Hello, World!";

//     // Calculate the size of the data in bytes
//     int dataSize = sizeof(data) - 1;  // -1 to exclude the null terminator for strings

//     // Using cout.write() to write binary data to the standard output
//     cout.write(data, dataSize);

//     // Output a newline for better readability
//     cout << endl;

//     return 0;
// }
