#include<iostream>
using namespace std;

// Date:15/03/24
// Run time polymorphism :
// Run time polymorphism mean the functions calls resolved at run time , and it achieves using the Function Overriding !
// Function Overriding :
// it occures when a derived class had a defination for one of the member fn of the base class. That base fn is said to be overriden.

// This is an example of polymorphism using the virtual functions : 

class Shape {
    public:
    virtual void draw(){
        cout << "Drawing ..." << endl ;
    }
};

class Rectangle : public Shape {
    public :
    void draw(){
        cout << "Drawing Rectangle ... " << endl ;
    }
};

class Circle : public Shape {
    public :
    void draw(){
        cout << "Drawing Circle ... " << endl ;
    }
};
int main(){
    Shape *base ;
    Shape shape_obj ;
    Rectangle rectangle_obj ;
    Circle circle_obj ;

    // base -> draw();
    base = &shape_obj ;
    base -> draw();
    base = &rectangle_obj ;
    base -> draw();
    base = &circle_obj ;
    base -> draw();

    return 0;
}