// Date : 16/02/2024
// Tic Tac Toe Game in C++ !

#include <iostream>
using namespace std;

int space[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
int row;
int column;
char token = 'x';
string Player_1;
string Player_2;
char sign_1;
char sign_2;
bool turn = true ;
int digit ;
void structure()
{
    cout << endl;
    cout << "      |       |        " << endl;
    cout << "  " << space[0][0] << "   |   " << space[0][1] << "   |  " << space[0][2] << endl;
    cout << "      |       |        " << endl;
    cout << " ---------------------" << endl;
    cout << "      |       |        " << endl;
    cout << "  " << space[1][0] << "   |   " << space[1][1] << "   |  " << space[1][2] << endl;
    cout << "      |       |        " << endl;
    cout << " ---------------------" << endl;
    cout << "      |       |        " << endl;
    cout << "  " << space[2][0] << "   |   " << space[2][1] << "   |  " << space[2][2] << endl;
    cout << "      |       |        " << endl;
    cout << endl;
};

void game_intro()
{
    cout << "Enter the Name of first Player : ";
    cin >> Player_1;
    cout << "Chosse any Sign => 'x' / 'O' ." << endl ;
    cin >> sign_1;
    if (sign_1 == 'x')
    {
        sign_2 = 'O';
    }
    else
    {
        sign_2 = 'x';
    }
    cout << "Done ! Your sign is : " << sign_1 << endl ;
    cout << "Enter the Name of second Player : ";
    cin >> Player_2;
    cout << "Your sign is : " << sign_2 << endl ;
};

void game_run(){
    cout << "Tern : " ;
    if(turn == true){
        cout << "Player_1 ." << endl ;
        turn = false ;
    }else{
        cout << "Player_2 ." << endl ;
        turn = true ;
    };
    cin >> digit ;
}
int main()
{
    game_intro();
    structure();
    game_run();
    game_run();
    game_run();
    game_run();
    game_run();
    return 0;
}