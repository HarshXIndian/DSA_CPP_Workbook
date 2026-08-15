// Date : 12 / 05 / 24
#include<iostream>
using namespace std;

class Base_A{
    public:
    int Item_no = 543 ;
    float version = 2.7 ;
    float size_Mb = 58.14 ;
    string Theme = "Gray / Day" ;
    void show(){
        cout << "Item_no. : " << Item_no << endl ;
        cout << "Version : " << version << endl ;
        cout << "size_mb : " << size_Mb << endl ;
        cout << "Theme : " << Theme << endl ;
    }
};

class Base_B{
    public :
    int Item_no = 291 ;
    float version = 2.0 ;
    float size_mb = 11.23  ;
    string Theme = "Black / Dark" ;
    void show(){
        cout << "Item_no. : " << Item_no << endl ;
        cout << "Version : " << version << endl ;
        cout << "size_mb : " << size_mb << endl ;
        cout << "Theme : " << Theme << endl ;
    }
};

class Derived : public Base_A , public Base_B {
    public :
    int Item_no = ((Base_A::Item_no + Base_B::Item_no)/2);
    float version = ++(Base_A::version) ;
    float size_mb = Base_A::size_Mb + Base_B::size_mb ;
    string Theme = "Winter / Snow" ;
    void show(){
        cout << "Item_no. : " << Item_no << endl ;
        cout << "Version : " << version << endl ;
        cout << "size_mb : " << size_mb << endl ;
        cout << "Theme : " << Theme << endl ;
    }
};
int main(){
    Base_B o1 ;
    o1.show();
    return 0;
}