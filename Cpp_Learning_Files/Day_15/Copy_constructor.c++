// Date : 15/02/2024
// tutorial #34
// Copy Constructor in C++ by Code With Harry !

#include<iostream>
#include<string>
using namespace std;

class Available_courses{
    string course_name ;
    bool certificate ;
    int duration ;
    int fees ;
    public :
        void show(){
            cout << "Course '" << course_name << "' have total duration of " << duration << " months , and you have to pay amount of rs. " << fees << "."<< endl ;
            if(certificate == true){
                cout << "Certificate will Provided !" << endl ;
            }else{
                cout << "Certificate will not Provided !" << endl ;
            };
        };

    Available_courses(){
        course_name = "You Don't Choose Any Course !";
        certificate = false ;
        duration = 0 ;
        fees = 0 ;
    }

    Available_courses(string name,int time, int fee){
        course_name = name ;
        if(fee > 1000){
            certificate = true ;
        }else{
            certificate = false ;
        }
        duration = time ;
        fees = fee ;
    }

    // copy constructor : create a copy of object course_2 !
    Available_courses(Available_courses &with_certificate){
        course_name = with_certificate.course_name ;
        certificate = true ;
        duration = with_certificate.duration + 2;
        fees = with_certificate.fees + 500 ;
};
};

int main(){
    // calling constructors : course_1 => default constructor !
    // course_2 => perametrized constructor !
    // course_3 => an copy constructor , create almost same copy of course_2 objects and we can perform modifications as we done !
    Available_courses course_1 , course_2("BCA" , 6 , 100) , course_3(course_2) ;

    // or we can call copy constructor as :
    Available_courses course_4 = course_1;

    course_1.show();
    course_2.show();
    course_3.show();
    course_4.show();
    return 0 ;
}