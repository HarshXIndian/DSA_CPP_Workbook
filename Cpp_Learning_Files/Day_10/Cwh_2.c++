// Tutorial #24 
// Cwh : Static Data Members & Methods in C++ OOPs .
#include<iostream>
using namespace std;

/*
# STATIC LOCAL VARIABLES : Class Variables
Visibility : Class .
Lifetime : Till termination of program .
Default Value : 0 .
Storage : Heap .

# LOCAL VARIABLES :
Visibility : Class .
Lifetime : Till termination of program .
Default Value : Garbage .
Storage : Stack .

# GLOBAL VARIABLES :
Visibility : File .
Lifetime : Till termination of program .
Default Value : 0. 
Storage : Heap .
*/

class Student{
    // static variable declaration : it take one time memory and get updated everytime and by default its value is '0' ,it also called class variable .
    // static int count is saved in common memory of class as it is used by all objects created by student class !
    static int count ;
    int id ;
    public :
        void getData(){
            cout << "Enter id of Student : " ;
            cin >> id ;
            count++ ;
        };

        // static member function declaration :
        static void getCount(){
            // Dogs and Non-Static functions are not aloud :)
            // Throw an error as it only accept static variable or functions => 
            // cout << id << endl ;
            // getData() ;
            // Don't Throw any error : as we use static variable 'count' .
            cout << "The value of count is : " << count << endl ;
        }

        void putdata(){
            cout << count << ".Student id is : " << id << endl ;
            // we can call static member function like this :
            // getCount();
        };

} Harsh ;

// Default value is zero .
int Student :: count ;

int main(){

    Student aman, naman;
    // Can not do this as id and count are private :
    // harsh.id = 1 ;
    // harsh.count = 1 ;

    Harsh.getData();
    Harsh.putdata();
    // call staic member function :
    Student::getCount();

    // for object 2 : static will update to 2 ! and +1 every time new objecte created by user !
    aman.getData();
    aman.putdata();
    // call staic member function :
    Student::getCount();

    // for object 3 : static variable count will update to 3 !
    naman.getData();
    naman.putdata();
    // call staic member function :
    Student::getCount();

    return 0;
}