// Containers --> Sequence Container !
// List in STL by love babber !
// Date : 07-03-2024 .
#include<iostream>
#include<list>
using namespace std;

/*
Lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence, and iteration in both directions.
List containers are implemented as doubly-linked lists; Doubly linked lists can store each of the elements they contain in different and unrelated storage locations.
The ordering is kept internally by the association to each element of a link to the element preceding it and a link to the element following it.
*/
void display(list<int> &list){
    for( auto pr : list ){
        cout << pr << " " ;
    }
    cout << endl ;
}

int main(){
    list<int> l ;
    cout << "Size : " << l.size() << endl ;
    l.push_back(5);
    l.push_back(1);
    l.push_front(10);
    cout << "Size : "<<l.size()<<endl;


    // cout << "Before Clear : " ;
    // display(l);
    // l.clear();
    // cout << "After Clear : " ;
    // display(l);

    l.sort();  
    display(l);

    // copy an list :
    list<int> lc(l) ;
    cout << "List copied from List 'l' is: ";
    display(lc);

    // list<int> :: iterator it ;
    // it = l.begin(); // points 1st element !
    // l.erase(it); // erase first element
    // l.erase(++it); // erase second element
    // it = ++ l.begin(); // points to 2nd element !
    // l.erase(++it) ; // erase third element 
    // display(l);

    l.push_back(800);
    l.push_front(400);
    display(l);

    l.pop_back();  // Delete last element
    l.pop_front(); // Delete first element
    cout << "Size : "<<l.size()<<endl;
    display(l);
    
    l.resize(5,1);  // Resize the list with 5 elements and set value of each new element as 1 .
    display(l);

    l.insert(l.end(),7); // Insert 7 at end of list .
    display(l);

    l.remove(10); // remove all occurrences of 10 in the list .
    display(l);

    l.unique(); //  Remove duplicate consecutive elements , keep only one occurrence of any element . 
    display(l);

    // merge : l.merge(v) ; where v is another list !
    l.reverse(); // Reverse the order of the elements in the list Container.
    display(l);
    return 0;
}