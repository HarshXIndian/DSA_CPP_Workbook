#include<iostream>
using namespace std;

template <class T1>
class Multipication{
    T1 a,b,m,s ;
    public :
        void setData(T1 x, T1 y){
            a = x ;
            b = y ;
        };
        T1 mul(T1 a , T1 b){
            m = a * b ;
            return m ;
        };
        T1 sum(T1 a , T1 b){
            s = a + b ;
            return s ;
        };
        void show(){
            cout << "Multipication of " << a << " and " << b << " is : " << mul(a,b) << endl ;
            cout << "Sum of " << a << " and " << b << " is : " << sum(a,b) << endl ;
        };
};

int main(){
    Multipication <float> obj ;
    obj.setData(10.5,25.1);
    obj.show();
    return 0;
}