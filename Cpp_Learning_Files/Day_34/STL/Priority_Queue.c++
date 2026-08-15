// Containers --> Container Adaptor !
// Priority Queue in STL by love babber !
// Date : 07-03-2024 .

#include<iostream>
#include<queue>
using namespace std;

/*
Priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains,
according to some strict weak ordering criterion.
This context is similar to a heap, where elements can be inserted at any moment,
and only the max heap element can be retrieved (the one at the top in the priority queue).
Priority queues are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container,
providing a specific set of member functions to access its elements. Elements are popped from the "back" of the specific container,
which is known as the top of the priority queue.

The underlying container may be any of the standard container class templates or some other specifically designed container class.
The container shall be accessible through random access iterators and support the following operations:
empty()
size()
front()

*/

int main(){
    // max heap :
    priority_queue<int> maxi;

    // min - heap :
    priority_queue< int,vector<int>,greater<int> > mini ;

    maxi.push(10);
    maxi.push(40);
    maxi.push(20);
    maxi.push(0);

    cout << "Traversing By Max Heap : " ;
    int size = maxi.size() ;
    for(int i = 0 ; i < size ; i++ ){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl ;

    mini.push(10);
    mini.push(40);
    mini.push(20);
    mini.push(0);

    cout << "Traversing By Min. Heap : " ;
    int size_mini = mini.size() ;
    for(int i = 0 ; i < size_mini ; i++ ){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl ;
    
    return 0 ;
}
