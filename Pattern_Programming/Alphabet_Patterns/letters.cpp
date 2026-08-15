#include <iostream>
using namespace std;

class Letters
{
public:
    int A()
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                // if(j == 1 || j == 2 || j == 5 || j == 6 || i == 4 || i == 3){
                //     cout << " # ";
                // }
                if (i == 1 && ((i + j) == 2 || (i + j) == 7))
                {
                    cout << "   ";
                }
                else if (!(j == 3 || j == 4) || !(i == 3 || i == 4 || i == 7 || i == 8))
                {
                    cout << " # ";
                }
                else
                {
                    cout << "   ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    int B()
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if ((j == 6 && (i == 1 || i == 8 || i == 5 || i == 4)) || j == 6 && (i == 1 || i == 8 || i == 5 || i == 4))
                {
                    cout << "   ";
                }
                else if (j == 1 || j == 2 || j == 5 || j == 6 || i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8)
                {
                    cout << " % ";
                }
                else
                {
                    cout << "   ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    int C()
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if ((j == 3 || j == 4) && (i >= 3 && i <= 6))
                {
                    cout << "   ";
                }
                else if ((j == 5 || j == 6) && (i == 4 || i == 5))
                {
                    cout << "   ";
                }
                else if ((i == 1 || i == 8) && (j == 1 || j == 6))
                {
                    cout << "   ";
                }
                else
                {
                    cout << " # ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    int D()
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (j == 6 && (i == 1 || i == 8))
                {
                    cout << "   ";
                }
                else if ((j == 3 || j == 4) && (i >= 3 && i <= 6))
                { // (i <= 3 && i >= 6) Amazing !
                    cout << "   ";
                }
                else
                {
                    cout << " % ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    int E(){
        for (int i = 1 ; i <= 8 ; i++ ){
            for (int j = 1 ; j <= 6 ; j++){
                if(( !(j <= 2) && ( i % 3 == 0) ) || ((j == 6 ) && (i == 4 || i == 5))){
                    cout << "   " ;
                }
                else{
                    cout << " % " ;
                }
            }
            cout << endl ;
        }
        cout << endl ;
    }

    int F(){
        for (int i = 1 ; i <= 8 ; i++ ){
            for (int j = 1 ; j <= 6 ; j++){
                if(( !(j <=2) && ( i == 3 || i >= 6) ) || ((j == 6 ) && (i == 4 || i == 5))){
                    cout << "   " ;
                }
                else{
                    cout << " # " ;
                }
            }
            cout << endl ;
        }
        cout << endl ;
    }

    int G(){
        for ( int i = 1 ; i <= 8 ; i++ ){
            for (int j = 1 ; j<= 6 ; j++){
                if(( j == 3 && ( i>= 3 && i <= 6)) || ( i == 3 && ( j >= 4 )) || ( j == 4 && i == 6)){
                    cout << "   " ;
                }
                else {
                cout << " # " ;
                }
            }
            cout << endl ;
        }
        cout << endl ;
    }

    int H()
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                // if(j == 1 || j == 2 || j == 5 || j == 6 || i == 4 || i == 3){
                //     cout << " # ";
                // }
                if (!(j == 3 || j == 4) || i == 4 || i == 5)
                {
                    cout << " # ";
                }
                else
                {
                    cout << "   ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    int I(){
        for ( int i = 1 ; i <= 8 ; i++){
            for ( int j = 1 ; j<= 6;  j++){
                if ( !(i >= 3 && i <= 6) || ( j == 3 || j == 4)) 
                cout << " # " ;
            else {
                cout << "   ";
            }
            }
            cout << endl ;
        }
        cout << endl ;
    }
};

int main()
{
    Letters obj;
    obj.A();
    obj.B();
    obj.C();
    obj.D();
    obj.E();
    obj.F();
    obj.G();
    obj.H();
    obj.I();
}