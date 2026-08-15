// "comments" in c++ => Video : 8 & 9
#include<iostream>
using namespace std ;
int main(){
    cout << "/*" << endl;
    cout << "*/" << endl ;
    // cout << /* "*/" */<< endl ; Error !
    cout << /* "*/" /* "/*" */ << endl ;
    return 0;
}