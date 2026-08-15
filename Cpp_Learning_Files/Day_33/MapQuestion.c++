// Maps Question :
/* 
Question : 1
Given N strings, print unique strings in lexiographical 
order with their frequencies where ,
N <= 10^5 
|S| <= 100 
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> map ;
    int N ;
    cout << "How Many Elements You Want to Enter in Map : " ;
    cin >> N ;
    for(int i = 0 ; i < N ; i++){
        string s ;
        cin >> s ;
        map[s]++ ;
    };
    for(auto pr : map){
        cout << pr.first << " -> " << pr.second << endl ;
    };
}