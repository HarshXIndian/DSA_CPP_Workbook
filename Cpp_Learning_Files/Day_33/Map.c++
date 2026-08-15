// Map in C++ By code with harry !
// Tutorial #73

#include<iostream>
#include<map>
#include<string>
using namespace std;

void display(map<string, int> &m){
    map<string, int> :: iterator iter ;
    for(iter = m.begin() ; iter != m.end(); iter++){
        cout << (*iter).first << " -> " << (*iter).second << endl ;
        // (*iter).first => Provide the key of iter !
        // (*iter).second => Provide the value of iter !
    };
}

int main(){
    // Map is an associative array !
    map<string, int> marks_map ;
    marks_map["Harsh"] = 72 ;
    marks_map["Rahul"] = 65 ;
    marks_map["Naman"] = 63 ;
    // marks_map["Aman "] = 59 ;
    // marks_map["Lakhi"] = 45 ;
    marks_map.insert({{"Aman ", 58},{"Lakhi",47}});

    // find operator in map :
    map<string, int> :: iterator it ;
    it = marks_map.find("Harsh") ; 
    // Searches the container for an element with a key equivalent to k and returns an iterator to it if found,
    // otherwise it returns an iterator to map::end.
    cout << (*it).first << " -> " << (*it).second << endl ;

    display(marks_map);
    marks_map.clear() ; // Clear the all content of the map !
    cout << "After clear the map : " ;
    display(marks_map);


    return 0;
}