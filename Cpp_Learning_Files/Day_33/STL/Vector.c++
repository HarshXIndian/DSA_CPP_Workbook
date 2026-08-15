// Containers --> Sequence Container !
// Vector in STL by love babber !
// Date : 06-03-2024 .
#include<iostream>
// Including vector's library :
#include<vector>
using namespace std;

void space(vector<int> &vec){
    cout << "Capacity : " << vec.capacity() << "    |   " ;
    cout << "Size : " << vec.size() << endl ;
}

void display(vector<int> &vector){
    for(auto pr : vector){
        cout << pr << " " ;
    }
    cout << endl ;
}

int main(){
    // It's a Dynamic array ! 
    vector<int> v ;
    vector<int> x(4);           
    vector<int> a(5,1) ; 
    vector<int> k(a) ; 
    
    v.push_back(1); 
    space(v);
    v.push_back(2); 
    space(v);
    v.push_back(3); 
    space(v);
    v.push_back(4); 
    space(v);

    // Random Access is available :
    cout << "Element on 2nd Position : " << v.at(2) << endl ;

    cout << "Front : " << v.front() << endl ;
    cout << "Back : " << v.back() << endl ;

    cout << "Before pop : " << endl ;
    display(v);
    v.pop_back();  
    cout << "After pop : " << endl ;
    display(v);

    cout << "Befor Clear : " << endl ;
    space(v);
    v.clear();
    cout << "After Clear : " << endl ;
    space(v);

    return 0;
}