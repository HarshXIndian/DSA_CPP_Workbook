// Tutorial #45
#include<iostream>
using namespace std;

class Student{
    protected :
        string student_name ;
    public :
        void set_name(string name){
            student_name = name ;
        };
};

class Test : virtual public Student{
    protected:
        int Physics ; 
        int Chemistry ;
        int Math ;
        int Test_marks ;
    public :
        void set_Test_Marks(int , int , int );
        void show_test_marks(){
            cout << "Marks in Subjects : " << endl ;
            cout << "Physics : " << Physics << endl ;
            cout << "Chemistry : " << Chemistry << endl ;
            cout << "Math : " << Math << endl ;
        }
};

void Test :: set_Test_Marks (int p, int c , int m){
    Test_marks = p + c + m ;
};

class Assignment : virtual public Student {
    protected :
        int Physics_assignment ;
        int Chemistry_assignment ;
        int Total_assignment ;
    public :
        void set_assignment(int, int);
};

void Assignment :: set_assignment(int pa, int ca){
    Total_assignment = pa + ca ;
};

class Result : public Test , public Assignment{
    protected :
        int Result ;
    public :
        void show_Result(){
            Result = Total_assignment + Test_marks ;
            show_test_marks(); 
            cout << "Total Marks : " << Result << " / 300" << endl ;
        }
};

int main(){
    Result r1;
    r1.set_name("Harsh");
    r1.set_Test_Marks(34,45,83);
    r1.set_assignment(18,17);
    r1.show_Result();
    r1.show_Result();
    return 0;
}