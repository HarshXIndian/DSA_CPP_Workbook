#include <iostream>
#include <string>
using namespace std;

int PatternMatching(const string &T, const string &P)
{
    int S = T.length();
    int R = P.length();
    int K = 1;
    int MAX = S - R + 1;

    while (K <= MAX)
    {
        int L = 0;
        while (L <= R)
        {
            if (P[L] != T[K + L - 1])
            {
                break;
            }
            else if (L == R)
            {
                return K;
            };
            L++;
        };
        K++;
    };
    return -1;
};

int main()
{
    string T;
    cout << "Enter Line !" << endl;
    getline(cin, T);
    string P;

    // string T = "Harsh Kumar !" ;
    // string P = "Saini";
    cout << "Enter Word For Found In Enterd Line !" << endl;
    getline(cin, P);
    int index = PatternMatching(T, P);
    if (index != -1)
    {
        cout << "Pattern found at position :" << index << endl;
    }
    else
    {
        cout << "Pattern not found !" << endl;
    };

    return 0;
};
