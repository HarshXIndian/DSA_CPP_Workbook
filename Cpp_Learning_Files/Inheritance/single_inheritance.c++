// Date : 12 / 05 / 24
#include<iostream>
using namespace std;

class Base{
    public:
    int x; 
    void setData(int a){
        x = a;
    }
};

class Derived : public Base{
    public :
    int y = 10 ;
    void showData(){
        cout << x + y << endl ;
    }
};
int main(){
    Derived o1 ;
    o1.setData(25);
    o1.showData();
    return 0;
}