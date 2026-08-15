// Multiple Inheritance by code with harry !
// tutorial #40
// Date : 20/02/2024

#include<iostream>
using namespace std;

// Base Class !
class Student{
    protected:
    int roll_number ;
    string name ;
    public:
    void setRoll_no(string,int);
    void showRoll_no();
};

void Student :: setRoll_no(string Name,int rn){
    name = Name ;
    roll_number = rn ;
};

void Student :: showRoll_no(){
    cout << "Roll No. Of Student '" << name << "' is : " << roll_number << endl ;
};

class Marks : public Student {
    protected:
    float Physics ;
    float Math ;
    float Hindi ;
    public :
    void setMarks(int,int,int);
    void showMarks();
};

void Marks :: setMarks(int pyh_marks,int math_marks,int hindi_marks){
    Physics = pyh_marks ;
    Math = math_marks ;
    Hindi = hindi_marks ;
};

void Marks :: showMarks(){
    cout << "Physics : " << Physics << endl ;
    cout << "Maths   : " << Math << endl ;
    cout << "Hindi   : " << Hindi << endl ;
}

class Result : public Marks {
    protected:
    float prcentile ;
    public:
    void showResult();
};

void Result :: showResult(){
    cout << "-----------------------------------------" << endl ;
    cout << "Student Name      : " << name << endl ;
    cout << "Student Roll_no   : " << roll_number << endl ;
    cout << "Marks in subjects : " << endl ;
    showMarks();
    cout << "Total Percantage of student is : " << ((Physics + Hindi + Math)/3) << " %" << endl ;
}

int main(){
    Result student_1 ;
    student_1.setRoll_no("Harsh",2059);
    student_1.setMarks(72,89,94);
    student_1.showResult();

    return 0;
}