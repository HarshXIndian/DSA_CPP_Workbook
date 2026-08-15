// Containers --> Container Adaptor !
// Set in STL by love babber !
// Date : 07-03-2024 .

#include<iostream>
#include<set>
using namespace std;

/*
Sets are containers that store unique elements following a specific order.
In a set, the value of an element also identifies it (the value is itself the key, of type T),
and each value must be unique. The value of the elements in a set cannot be modified once in the container (the elements are always const),
but they can be inserted or removed from the container.
Internally, the elements in a set are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
set containers are generally slower than unordered_set containers to access individual elements by their key,
but they allow the direct iteration on subsets based on their order.
Sets are typically implemented as binary search trees.
*/
int main(){
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(7);
    s.insert(6);
    s.insert(2);    
    s.insert(1);
    s.insert(1); // 1 three times 
    s.insert(6); // 6 two times  

    for(auto i : s){
        cout << i << endl ; // 1 2 5 6 7 
    }

    set<int> :: iterator it,lb,ub ;
    // it = s.begin();
    // s.erase(it); // erase one element from the container using Iterator.
    // s.erase(5);  // erase all elements with value 5 from the container.

    s.find(5);
    if (s.find(5) == s.end()) {
      cout<<"Element is not present!"<<endl; 
    } else {
      cout<<"Element is present!"<<endl;  
    };

    cout << "Is 5 is prsent or not : " << s.count(5) << endl ; //  return true / false 
    it = s.find(6);
    cout << "value at iterator is -> " << *it << endl ;

    lb = s.lower_bound(2); // returns iterator pointing to first element > 2
    ub = s.upper_bound(6); // return iterator pointing to first element > 6

    cout << "Before erase the elements\nfrom lb to ub : " << endl;
    for(auto i : s){
        cout << i << endl ;
    }
    s.erase(lb,ub);
    cout << "After erase the elements\nfrom lb to ub : " << endl ;
    for(auto i : s){
        cout << i << endl ;
    }

}