// Date : 12 / 05 / 24
#include<iostream>
using namespace std;

class Base{
    public:
    int x; 
    void setData(int a){
        x = a;
    }
    void showData(){
        cout << "X : " << x << endl ;
    };
};

class Derived : public Base{
    public :
    int y ;
    void setDataY(){
        y = x * 2;
    }
    void showData(){
        cout << "X : " << x << ",Y : " << y << endl ;
    }
};

class Sub_Derived : public Derived {
    public :
    int z ;
    void setDataZ(){
        z = y + x ;
    }
    void showData(){
        setDataY() ;
        setDataZ() ;
        cout << "X : " << x << "\nY : " << y << "\nZ : " << z <<endl ;
    }
};
int main(){
    Sub_Derived o1 ;
    o1.setData(5);
    o1.showData();
    return 0;
}