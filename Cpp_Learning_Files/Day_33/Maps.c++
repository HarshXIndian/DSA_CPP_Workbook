// STL Maps in C++ by luv !

#include<iostream>
#include<map>
#include<string>
using namespace std;

void display(map<int,string> &m){
    cout <<  "Size of Map is : " << m.size() << endl ;
    for(auto &pr : m ){
        cout << pr.first << " -> " << pr.second << endl ;
    };
};
int main(){
    map<int , string> maps ;
    maps[1] = "one" ;
    maps[2] = "doo" ; // complexity O(log n) depends on data types !
    maps[2] = "two" ; // every kety in map is unique so it will replace last value !
    maps[4] = "four" ;
    maps[3] = "three" ;
    maps.insert({5,"five"});

    // maps["Barwa"] = "Kurukshetra" ; // complexity of this  operation is s.size() * log(n) .

    auto it = maps.find(7); // it return iterator ! // Complexity O(log n)
    if(it == maps.end()){
        cout << "NO VALUE !!!" << endl ;
    }else{
        cout << (*it).first << " -> " << (*it).second << endl ;
    }

    if( it != maps.end()) maps.erase(it);

    // map<int,string> :: iterator it ;
    // for(it = maps.begin() ; it != maps.end(); it++ ){
    //     cout << (*it).first << " -> " << (*it).second << endl ;
    // }
    // Instead we can use :
    display(maps);
    maps.clear(); // this function remove all elements from the container and also clear the memory occupied by them .
    display(maps);
    return 0 ;
}