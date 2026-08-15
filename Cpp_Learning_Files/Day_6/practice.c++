#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 7 ; i++){
        for (int j = 1; j <= 7; j++)
        {
            if( !(j == 3 || j == 4 || j == 5 ) || (i == 3 || i == 4)){
            cout << " # " ;
            }else{
                cout << "   " ;
            }
        }
        cout << endl ;
    }

    return 0;
}