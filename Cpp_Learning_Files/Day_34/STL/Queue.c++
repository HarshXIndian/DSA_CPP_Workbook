// Containers --> Container Adaptor !
// Queue in STL by love babber !
// Date : 07-03-2024 .

#include<iostream>
#include<queue>
using namespace std;

/*
queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out),
where elements are inserted into one end of the container and extracted from the other.
queues are implemented as containers adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container,
providing a specific set of member functions to access its elements. Elements are pushed into the "back" of the specific container and popped from its "front".

The underlying container may be one of the standard container class template or some other specifically designed container class.
This underlying container shall support at least the following operations:
empty
size
front
back
*/

int main(){

    queue<string> q;
    q.push("I");
    q.push("Love");
    q.push("You");
    
    cout << "First Element is : " << q.front() << endl ;
    cout << "Size : " << q.size() << endl ;
    q.pop(); // remove first element !
    cout << "Now After pop() , First Element is : " << q.front() << endl ;
    cout << "Size : " << q.size() << endl ;
    cout << "Last Element is : " << q.back();
    
    return 0;
}