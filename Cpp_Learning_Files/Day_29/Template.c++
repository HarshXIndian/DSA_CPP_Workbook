// Tutorial #63 + #64
// Writing our First C++ Class Template Programm

#include<iostream>
using namespace std;

template<class T>
class Wish{
    T YourWish ;
    public:
    void setData(){
        cout << "Enter Your Wished Number / Word / Line : " ;
        cin >> YourWish ;
    };
    void show(){
        setData();
        cout << "You Wished : " << YourWish << " ." << endl ;
    }
};

int main(){
    Wish <char> w1 ;
    w1.show();
    return 0;
}
