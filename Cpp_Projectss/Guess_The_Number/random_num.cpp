#include<iostream>
#include<time.h>
using namespace std;

// int main(){
//     srand(time(NULL));

//     int num = (rand() % 6) + 1;
//     cout<<num;
//     return 0;
// }

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    guess = (rand()%100)+1;

    cout<<"*****Number gussing game****\n";

    do
    {
        cout<<"Enter a guess 1 to 100"<<endl;
        cin>>num;
        tries++;

        if(guess > num){
            cout<<"High!\n";
        }else if (guess<num){
        cout<<"Low!\n";
        }else{
            cout<<"correct! of tries: "<<tries<<endl;
        }
    } while (guess!=num);

    cout<<"***** number guessing game *****\n";

    return 0;
}