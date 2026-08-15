// Date: 10/3/24
// Login Form !
#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
using namespace std;

class Login
{
private:
    string userID, userPass;
public:
    Login(){}; // default constructor !
    void setData(string id, string pass)
    {
        userID = id;
        userPass = pass;
    }
    string getID()
    {
        return userID;
    };
    string getPass()
    {
        return userPass;
    };
};

int user()
{
    int userno;
    ifstream user("user.txt");
    user >> userno;
    int CurrentUser = userno;
    ofstream usero("user.txt");
    userno++;
    usero << userno;
    user.close();
    return CurrentUser;
};

class Member {
    public :
    bool IsMember  ;
    void setMember(int x){
        if(x == 1) IsMember = true;
    }
};

void SignUp(Login log,Member m)
{
    cout << "Loading ";
    for (int i = 0; i < 3; i++)
    {
        cout << ".";
        Sleep(300);
    }
    system("cls");
    cout << ": www.India.org | Registration " << endl ;
    cout << "--------------------------------" << endl;
    string id, pass;
    cout << "Enter Your ID : ";
    cin >> id;
start:
    cout << "Enter Strong Password (Use only 8 characters !) : ";
    cin >> pass;

    if (pass.length() == 8)
    {
        log.setData(id, pass);
    }
    else
    {
        cout << "Enter Minimum 8 character Password !" << endl;
        goto start;
    }

    ofstream out("DataBase.txt", ios::app);
    if (!out)
    {
        cout << "Error : File Can't Open ! " << endl;
    }
    else
    {
        system("cls");
        cout << "Loading ";
        for (int i = 0; i < 3; i++)
        {
            cout << ".";
            Sleep(300);
        }
        system("cls");
        int userCount = user();
        out << "User " << userCount << " Data :" << endl;
        out << id << " : " << pass << endl;
        out << "--------------------" << endl;
        cout << "Congratulation You Succsesfully Signed In ! " ;
        for (int i = 0; i < 3; i++)
        {
            cout << ".";
            Sleep(1000);
        }
    }
};

void logIn(Login log,Member m)
{
    system("cls");
    cout << "Loading ";
    for (int i = 0; i < 3; i++)
    {
        cout << ".";
        Sleep(300);
    }
    system("cls");
    cout << ": www.India.org | LogIn " << endl ;
    cout << "--------------------------------" << endl;
    string id, pass;
    cout << "Enter Your LogIn ID : ";
    cin >> id;
    cout << "Enter Your Password : ";
    cin >> pass;
    ifstream find("DataBase.txt");
    if (!find)
    {
        cout << "Error 404 !" << endl;
    }
    else
    {
        // cheack that user data matches with file data or not ...
        string line;
        bool found = false;
        while (getline(find, line))
        {
            stringstream ss;
            ss << line;
            string userID, userPass;
            char delimiter;
            ss >> userID >> delimiter >> userPass;
            if (id == userID && pass == userPass)
            {
                found = true;
                system("cls");
                cout << ": www.India.org | Registration " << endl ;
                cout << "--------------------------------" << endl;
                cout << "Welcome To T.G.H ! " ;
                m.setMember(1);
                for (int i = 0; i < 3; i++)
                {
                cout << ".";
                Sleep(300);
                }
                break;
            };
        };
        if (found == false)
        {
            cout << "Incorrect Login Id and Password ";
            for (int i = 0; i < 3; i++)
                {
                cout << "!";
                Sleep(300);
                }
        };
        find.close();
    };
    Sleep(2000);
};


int main()
{
    Login Log;
    

    bool exit = false;
    while (!exit)
    {
        Member Mem ;
        system("cls");
        int val;
        cout << ": www.India.org | Home " << endl ;
        cout << "--------------------------------" << endl;
        cout << "\tINDIAN T.G.H !!!" << endl;
        cout << "--------------------------------" << endl;
        cout << "1) Registration " << endl;
        cout << "2) Log-In" << endl;
        cout << "3) Exit !" << endl;
        if(Mem.IsMember == true){
        cout << "--------------------------------" << endl;
            cout << "4) Let's Gooo ! " << endl ;
        }
        cout << "---------------------> Input : ";
        cin >> val ;

        if (val == 1)
        {
            SignUp(Log,Mem);
        }

        if (val == 2)
        {
            logIn(Log,Mem);
        }

        if(val == 3){
            exit = true ;
            system("cls");
            cout << "Loading " ;
            for(int i = 0 ; i < 3 ; i++){
                cout << "."  ;
                Sleep(300);
            }
            system("cls");
            cout << "Pdharne ke liye Dhnyawaad !" << endl ;
            Sleep(5000);
        };
    };
    return 0;
}