// Date : 14/02/24 
// Tutorial #30
// Parameterized and Default Constructors In C++ By Code With Harry !
#include<iostream>
using namespace std;

class object{
    int a ;
    int b ;
    public :
        void show(){
            cout << "The Object's Values are : " << endl ;
            cout << "a : " << a << endl ;
            cout << "b : " << b << endl ;
        };

    // Default Constructor :
    // Default Constructor run automatically whenever object is called and they have no parameters !
    object(void){
        a = 10 ;
        b = 20 ;
    };

    // Parametrized Constructor :
    // parametrized Constructor also run automatically whenever object is called and they have some parameters !
    object(int x, int y){
        a = x ;
        b = y ;
    }
};

class Point{
    int x, y ;
    public :
        Point(int a, int b){
            x = a ;
            y = b ;
        }

        void showPoint(){
            cout << "The Object's Points are : " << endl ;
            cout << "Point x : " << x << endl ;
            cout << "Point y : " << y << endl ;
        }
};

int main(){
    
    object o1 ; // simple call to default constructor !
    o1.show();
    
    // Implicit call to "Parametrized Constructor" :
    object o2(4,6); // call to parametrized constructor !
    o2.show();

    // Explicit call to "Parametrized Constructor" :
    object o3 = object(5,8); // call to parametrized constructor !
    o3.show();

    // ------------ > 

    Point points_1(1,1);
    points_1.showPoint();

    Point points_2(4,6);  
    points_2.showPoint();

    return 0; 
}