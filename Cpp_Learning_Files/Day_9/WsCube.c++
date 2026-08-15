// Nesting of Member function in c++ :
// By Using Nesting members function concept we can achieve it => 
#include <iostream>
using namespace std;

class abc
{
    int a;
    int b;
    int large(int a, int b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        };
    }
public:
    void getdata();
    void display();
    void execute();
};

void abc :: getdata()
{
    cout << "Enter the two values for finding the larger Number :";
    cin >> a >> b;
    display();
};

void abc :: display(){
    cout << "Larger Number is : " ;
    cout << large(a,b) << endl ;
    // Here a class function call same class's private function and can use it as it is also member of same class !
};

void abc :: execute(){
    getdata() ;
}

int main()
{
    abc obj ;
    // ---------> Working 1 : user call getdata() -> user call display() -> display function call larger() function -> output !
    /*
    obj.getdata();
    // obj.large(); // show error as we (user) can't access the private function or data values !
    obj.display();
    */

    // ---------> Working 2 : user call execute() -> execute function call getdata() -> getdata() function call display() function -> display function call larger() function -> output !
    obj.execute() ;

    return 0;
}