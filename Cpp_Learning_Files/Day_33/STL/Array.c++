// Containers --> Sequence Container !
// Array in STL by love babber !
// Date : 06-03-2024 .
#include<iostream>
// adding library :
#include<array>

using namespace std ;

int main(){
    // Simple array :
    int basic[4] = {1,2,3,4};

    // STL Array Declaration :
    array<int,4> a  = {1,2,3,4};

    int size = a.size() ;
    for(int i = 0 ; i < size ; i++){
        cout << a[i] << endl ;
    };

    cout << "Elements at 2nd position : " << a.at(2) << endl ; // return the item at the position 2 ! Complexity will be O(1)
    cout << "Empty or Not : " << a.empty() << endl ; // return boolean value !
    cout << "First Element of array is : " << a.front() << endl ;
    cout << "Last Element of array is : " << a.back() << endl ;
    
    return 0;
}