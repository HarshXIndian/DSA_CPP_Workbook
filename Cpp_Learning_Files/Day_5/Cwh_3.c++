// Date : 4/2/24 
// Cwh : if-else and switch conditions statements by code with harry :
// tut 9 
#include<iostream>
using namespace std;

int main(){
    cout << "This is Tutorial 9 =>" << endl ;
    cout << "Enter your age : " ;
    int age ;
    cin >> age ;

    // if - else statement !
    if(age < 18 ){
        cout << "You can't Vote !" << endl ;
    }else{
        cout << "You can Vote !" << endl ;
    };

    // if - else lader statement !
    cout << "Guess the any number between 0 to 100 : " ;
    int num ;
    cin >> num ;
    if( num < 50){
        cout << "You gueesed too low value !" << endl ;
    }else if( num > 100 ){
        cout << "Error !" << endl ;
    }else if( num > 50 ){
        cout << "You gueesed too high value !" << endl ;
    }else{
        cout << "You gueesed Perfect value !" << endl ;
    };

    // switch statement !
    cout << "Enter the Month number : " ;
    int mon ;
    cin >> mon ;
    switch(mon){
        case 1:
        cout << "Month is => January !" << endl ;
        break ;
        case 2:
        cout << "Month is => Februry !" << endl ;
        break ;
        case 3:
        cout << "Month is => March !" << endl ;
        break ;
        case 4:
        cout << "Month is => April !" << endl ;
        break ;
        case 5:
        cout << "Month is => May !" << endl ;
        break ;
        case 6:
        cout << "Month is => June !" << endl ;
        break ;
        case 7:
        cout << "Month is => July !" << endl ;
        break ;
        case 8:
        cout << "Month is => August !" << endl ;
        break ;
        case 9:
        cout << "Month is => September !" << endl ;
        break ;
        case 10:
        cout << "Month is => October !" << endl ;
        break ;
        case 11:
        cout << "Month is => November !" << endl ;
        break ;
        case 12:
        cout << "Month is => December !" << endl ;
        break ;
    default:
        break ;
    }
    return 0;
}