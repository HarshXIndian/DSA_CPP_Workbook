// Type conversion : The process of converting one type of data into another type of data is called type conversion .
// Conversion from basic data type to Class type Conversion is the first type of type conversion . It Conversion method use the constructor .
// Date : 11 / 05 / 24
#include<iostream>
using namespace std;

class time{
    int hrs ; // basic type 
    int min ; // basic type 
    public:
    time(int t){
        hrs = t / 60 ; 
        min = t % 60 ;
    };
    void show(){
        cout << "Time is " << hrs << "h:" << min << "m. " << endl ;
    };
};
int main(){
    int x ;
    cout << "Enter the Value of Time : " ;
    cin >> x ;
    time t1(x) ; // class type 
    t1.show(); 
    return 0 ;
}

// assume that we pass the value 85 :
// so after that conversion the hrs member of class t1 will contain a value '1' and member min will contain value of '25' .
// Repersents 85 (basic type) => 1 hrs : 25 min (t1 class type)