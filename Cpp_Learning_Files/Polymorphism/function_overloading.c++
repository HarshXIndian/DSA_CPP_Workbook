#include<iostream>
using namespace std;
// Date: 15/03/24
// Compile-time polymorphism :
// A ) Function Overloading : when there are multiple fn with the same name but diff parameters, then the fn are said to be "Overloaded",
// hence this is known as Function Overloading.

// Here funtion "fn" perform many types of operation and show many types of behaviour that is based on the parameters it used in !
class Sum{

    public: 
    // fn function will return sum of two integer type numbers !
    int fn(int x,int y){
        cout << "Result of sum is : " << (x+y) << endl ; 
    }
    // fn function will return sum of two double type numbers !
    double fn(double x,double y){
        cout << "Result of sum is : " << (x+y) << endl ; 
    }
    // fn function will return sum of three integer type numbers !
    int fn(int x,int y,int z){
        cout << "Result of sum is : " << (x+y+z) << endl ; 
    }
    // fn function will return sum of three floating type numbers !
    double fn(double x,double y,double z){
        cout << "Result of sum is : " << (x+y+z) << endl ;
    }

};
int main(){
    Sum obj_1 , obj_2 , obj_3 , obj_4 ;
    obj_1.fn(5,6);
    obj_2.fn(55.32,23.04);
    obj_3.fn(4,9,1);
    obj_4.fn(1.9,8.32,4.7);
    return 0;
}