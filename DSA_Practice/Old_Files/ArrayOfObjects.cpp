#include<iostream>
using namespace std;

class employee
{
    char name[10];
    float age ;
    public:
    void getdata();
    void putdata();
};
void employee :: getdata(){
    cout << "Enter Name : " ;
    cin >> name ;
    cout << "Enter Age : " ;
    cin >> age ;
};
void employee :: putdata(){
    cout << name << "  " ;
    cout << age << endl;
};
int main(){
    employee manager[3];
    for(int i = 0 ; i < 3 ; i++){
        manager[i].getdata();
    }
    for(int i = 0 ; i < 3 ; i++){
        manager[i].putdata();
    };
    return 0;
}
