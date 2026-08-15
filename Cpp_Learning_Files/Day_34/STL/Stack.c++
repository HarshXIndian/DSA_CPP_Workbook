// Containers --> Container Adaptor !
// Stack in STL by love babber !
// Date : 07-03-2024 .

#include<iostream>
#include<stack>
using namespace std ;

/*
Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out),
where elements are inserted and extracted only from one end of the container.
stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container,
providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container,
which is known as the top of the stack.

The underlying container may be any of the standard container class templates or some other specifically designed container class.
The container shall support the following operations:
empty
size
push 
pop
top
swap

*/

void display(stack<int> &st){
    cout << "Size : " << st.size() << endl ;
    cout << "Top is : " << st.top() << endl ;

}

void show(stack<int> &sta){
    stack<int> temp(sta);
    for(int i = 0 ; i < sta.size() ; i++ ){
        cout << temp.top() << endl ;
        temp.pop();
    }
}

int main(){
    stack<int> s ;
    cout << "Size : " << s.size() << endl ;
    cout << "Empty ? : " << s.empty() << endl ;
    
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20); // top is => 20 
    cout << "Before pop : " << endl ;
    display(s);
    show(s);
    s.pop(); // pop top of stack which is : 20 .
    cout << "After pop : " << endl ;
    display(s);
    show(s);

    stack<int> plates ;
    plates.push(2);
    plates.push(5);
    plates.push(1); // top is 1 
    plates.top() = 9; // top is 9 .

    cout << "Before swap : " << endl ;
    cout << "Size of stack(s) : " << s.size() << " | " << "Size of stack(plates) : " << plates.size() << endl ;
    cout << "Top of stack(s) : " << s.top() <<  " | " << "Top of stack(plates)  : " << plates.top() << endl ;
    s.swap(plates);
    cout << "After swap : " << endl ;
    cout << "Size of stack(s) : " << s.size() << " | " << "Size of stack(plates) : " << plates.size() << endl ;
    cout << "Top of stack(s)  : " << s.top() <<  " | " << "Top of stack(plates)  : " << plates.top() << endl ;


    return 0 ;
}