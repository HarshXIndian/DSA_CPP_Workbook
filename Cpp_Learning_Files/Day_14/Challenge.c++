// Challenge : 
// Create a function() which takes 2 point objects and compute the distance between those 2 points .

// try =>
// Distance betweem (1,1) and (1,1) is 0 .
// Distance betweem (0,1) and (0,6) is 5 .
// Distance betweem (1,0) and (70,0) is 69 .

#include<iostream>
#include<math.h>
using namespace std;

// Creating a Point Class :
class Point {
    int x , y ;
    friend int PointsDistance(Point obj_1 , Point obj_2);
    public :
        Point(int a , int b){
            x = a ;
            y = b ;
        };
        void showDistance();
};

// A function() calculate distance between two Points Objects .
int PointsDistance(Point obj_1 , Point obj_2){
    int distance = (sqrt (((obj_2.x - obj_1.x)*(obj_2.x - obj_1.x)) + ((obj_2.y-obj_1.y)*(obj_2.y-obj_1.y))));
    cout << "Distance Between Points (" << obj_1.x << "," << obj_1.y <<") and (" << obj_2.x << "," << obj_2.y <<") is : " << distance << "." << endl ;
};

int main(){
    Point o1(1,1);
    Point o2(1,1);
    PointsDistance(o1,o2); // Answer should be 0 .

    Point o3(0,1);
    Point o4(0,6);
    PointsDistance(o3,o4); // Answer should be 5 .

    Point o5(1,0);
    Point o6(70,0);
    PointsDistance(o5,o6); // Answer should be 69 .

    return 0 ;
}