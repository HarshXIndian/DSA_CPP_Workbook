// Friend Function by Code With Harry !
// Tutorial #26
#include<iostream>
using namespace std;

class complex {
    int a ;
    int b ;
    public :
        void getData(int value_1, int value_2){
            a = value_1 ;
            b = value_2 ;
        };

        // friend function declaration :
        friend complex sumComplex(complex obj_1,complex obj_2) ;

        void display(){
            cout << "Your Numbers is : " << a << " + " << b << "i" << endl ;
        };
};

complex sumComplex(complex obj_1 , complex obj_2){
    complex obj_3 ;
    // without friend declaration it thorow an error as it have no permission to access the private data of complex object !
    obj_3.getData((obj_1.a + obj_2.a) , (obj_1.b + obj_2.b)) ;
    return obj_3 ;
};

int main(){
    complex o1,o2,sum ;
    o1.getData(1,4);
    o2.getData(5,8);
    // sum.sumComplex(o1,o2); it is wrong ! 
    sum = sumComplex(o1,o2);
    o1.display();
    o2.display();
    sum.display();

    return 0;
}

/*
Properties of Friend functions =>

1. Not in the scope of class !
2. since it is not in the scope of the class , it cannot be called from the object of that class. like c3.sumcomplex() == invalid .
3. can be invoked without the help of any object .
4. usually contans the objects as an arguments .
5. can be declared inside public or private section of the class .
6. it cannot access the member directly by their names and need object_name.member_name to access any member. 
*/