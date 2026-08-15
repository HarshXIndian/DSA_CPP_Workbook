// Tutorial #19 + Self Project Type !
// Function Overloading :
#include<iostream>
using namespace std;

// Function Overloading :
// It is a feature of OOPs where two or more function can have the same name but different parameters. 
// When a funciton name is overloaded with diffrent jobs it is called Function Overloading !
// In F.O "Funcion" name should be same and the arguments should ne different.
// It is considered as an example of a "Polymorphism" feature in C++ .

// A Program to calculate the Volume of Cube , Rectangle and  Cylinder By Using the concept of Function Overloading .

int vol(int l , int b , int h ){
    // vol of Rectangle is calculated by : length * breath * height .
    return (l * b * h) ;
};

float vol(int r , int h){
    // vol of Cylinder is calculated by : pi * (redius)square * height .
    return (3.14 * r * r * h) ; 
};

int vol(int s){
    // vol of Cube is calculated by : side * side * side .
    return (s * s * s) ;
};


int main(){
    int enter ;
    int length ;
    int breath ;
    int height ;
    int radius ;
    int side ;
    cout << "<---------- Calculate Volume ----------> " << endl ;
    cout << "For 'Rectangle' Enter '1' ! " << endl ;
    cout << "For 'Cylinder' Enter '2' ! " << endl ;
    cout << "For 'Cube' Enter '3' ! " << endl ;
    cout << "Enter => " ;
    cin >> enter ;

    switch (enter)
    {
    case 1:
        cout << "Enter the 'Length' , 'Breath and 'Height' of the Rectangle : " ;
        cin >> length >> breath >> height ;
        cout << "The volume of Rectangle is : " << vol(length,breath,height) << endl ;
        break;
    case 2 :
        cout << "Enter the 'Radius' and 'Height' of the Cylinder : " ;
        cin >> radius >> height ;
        cout << "The volume of Cylinder is : " << vol(radius,height) << endl ;
        break;
    case 3 :
        cout << "Enter a 'side' of the Cube : " ;
        cin >> side ;
        cout << "The volume of Cube is : " << vol(side) << endl ;
        break;
    default:
        cout << ":(" << endl ;
        break;
    }
    return 0 ;
}