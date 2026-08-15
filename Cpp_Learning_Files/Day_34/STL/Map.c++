// Containers --> Container Adaptor !
// Map in STL by love babber !
// Date : 07-03-2024 .

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Harsh" ;
    m[2] = "Methi" ;
    m[3] = "Harshit" ;
    m.insert({4,"Akash"});
    
    for(auto i : m){
        cout << i.first << " -> " << i.second << endl ;
    }

    cout << "Finding : 3 => " << m.count(3) << endl ;
    m.erase(3);
    cout << "After erase operaton Finding : 3  => " << m.count(3) << endl ;
}