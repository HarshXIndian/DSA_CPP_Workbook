// Date : 11/2/24
// Array of Objects & passing objects as Function arguments in c++ .
// Tutorial #25

// ----------------> Array of Objects !

#include <iostream>
using namespace std;

class Student
{
    int id;
    int marks;
    string course;

public:
    void setData()
    {
        course = "BCA" ; 
        cout << "Enter id of Student : ";
        cin >> id;
    }

    void showData() {
        cout << "The id of Student is : " << id << endl;
        cout << "And Course is " << course << " and Marks are :" << marks /*garbage value*/ << " of the student !" << endl ;
    }
};

int main()
{
    // One way => worth it only wnen you have very low number of objects !
    Student Harsh , Aman ;
    // Harsh.setData() ;
    // Harsh.showData();

    // Aman.setData();
    // Aman.showData();

    // Second Way : Create a array of objects =>
    Student Bca[5] ; // for example store data of bca - 5 students.
    for(int i = 1 ; i <= 5 ;i++){
        Bca[i].setData();
        Bca[i].showData();
    } ; 

    return 0;
}