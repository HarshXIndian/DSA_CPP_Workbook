// Containers --> Sequence Container !
// Deque in STL by love babber !
// Date : 06-03-2024 .
#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> &deque){
    for(auto pr : deque){
        cout << pr << " " ;
    }
    cout << endl ;
}

int main(){

    deque<int> d ;

    d.push_back(10);
    d.push_front(5);
    d.push_back(15);
    d.push_back(20);
    d.push_front(1);

    display(d);

    d.pop_front();
    d.pop_back();
    display(d);

    cout << "Front : " << d.front() << endl ;
    cout << "Back : " << d.back() << endl ;
    cout << "Empty ? => " << d.empty() << endl ;
    cout << "Element at third position : " << d.at(2) << endl ;

    cout << "Before Erase : " << d.size() << endl ;
    display(d);
    d.erase(d.begin(),d.begin()+1); // will erase first element !   
    cout << "After Erase : " << d.size() << endl ;
    display(d);
    
    return 0;
}