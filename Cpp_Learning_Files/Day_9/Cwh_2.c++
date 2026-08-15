// Tutorial #21 
// Cwh : Classes, Public and Private access modifier in C++ .
#include<iostream>
using namespace std;

// Why Class insetead of Structure ?
// Structure is not safe in security of data !
// Structure can not hold "Functions" !

// Class :
class student {
    private :
        int Student_registration_no ;
    public:
        int Student_age ;
        int Student_marks ;
        void set_data(int reg_no,int age,int marks); // Declaration ! 
        void get_data(){    // Declaration and Initialization !
            cout << "The value of Student_registration_no is : " << Student_registration_no << endl ;
            cout << "The value of age is : " << Student_age << endl ;
            cout << "The value of marks is : " << Student_marks << endl ;
        }
};

// Initialize the values in function , Declatred in class student !
void student :: set_data(int reg_no,int age,int marks){
    Student_registration_no = reg_no ;
    Student_age = age ;
    Student_marks = marks ;
};

int main(){
    // obj creation with name "Harsh":
    student Harsh ;

    Harsh.set_data(15,20,56) ;
    Harsh.get_data() ;

    // we can access it as well as change it as it is public data !
    Harsh.Student_age = 19 ;
    // we can't access the private data of class ! 
    // we only access those data by functions declared in class !
    // Harsh.Student_registration_no = 20 ;

    Harsh.get_data() ;

    return 0;
}