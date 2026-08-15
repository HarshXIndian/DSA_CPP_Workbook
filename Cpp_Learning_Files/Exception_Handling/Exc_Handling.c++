// Date : 12 / 05 / 24
#include<iostream>
using namespace std ;

int main(){
    float a,b ;
    cout << "<----------- Enter Values For Division ----------->" << endl ;
    cout << "Enter a and b : " ;
    cin >> a >> b ;
    
    try{
        if(b != 0 ){
            cout << a/b << endl ;
        }
        else{
            throw(b);
        }
    }
    catch(int i){
        cout << "Error => Divide By Zero :(" << endl ;
    }

    return 0;
}
