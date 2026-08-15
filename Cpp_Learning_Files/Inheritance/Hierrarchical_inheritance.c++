// Date : 12 / 05 / 24
#include<iostream>
using namespace std;

class Base{
    public:
    int x = 10 ;
};

class Derived_A : public Base{
    public :
    int y ;
    void setData_A(int a){
        y = a ;
    }
    void showData(){
        cout << " X + Y : " << x + y << endl ;
    }
};

class Derived_B : public Base {
    public :
    int y;
    void setData_B(int a){
        y = a ;
    }
    void showData(){
        cout << " X - Y : " << x - y << endl ;
    }
};
int main(){
    Derived_A o1 ;
    o1.setData_A(10);
    o1.showData();
    Derived_B o2 ;
    // o2.setData(10);
    o2.setData_B(3);
    o2.showData();
    return 0;
}