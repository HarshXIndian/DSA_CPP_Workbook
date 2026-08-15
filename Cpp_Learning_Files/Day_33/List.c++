// tutorial #72
// STL in C++ BY code with harry !
// Date : 6/3/24

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator it ;
    for(it = l.begin(); it != l.end(); it++){
        cout << *it << " " ;
    }
    cout << endl ;
}

int main(){
    list<int> list_1 ; // list of 0 length 
    list_1.push_back(5); // 5
    list_1.push_back(7); // 5 7
    list_1.push_back(9); // 5 7 9 
    list_1.push_back(11);// 5 7 9 11
    list_1.push_front(3);// 3 5 7 9 11 
    display(list_1); 

    list_1.pop_back();  // 3 5 7 9 
    list_1.pop_front(); // 5 7 9 
    list_1.remove(7);   // 5 9 
    display(list_1);

    // Sorting the list :
    list_1.push_back(18);  // 5 9 18 
    list_1.push_back(2);   // 5 9 18 2
    list_1.push_front(20); // 20 5 9 18 2
    list_1.push_back(7);   // 20 5 9 18 2 7 
    list_1.push_front(3);  // 3 20 5 9 18 2 7 
    cout << "Before sort : " ; 
    display(list_1);
    list_1.sort(); // 2 3 5 7 9 18 20 
    cout << "After sort : " ; 
    display(list_1);

    // Mergin Two lists :
    list<int> list_2;
    list_2.push_back(11); // 11
    list_2.push_back(5);  // 11 5
    list_2.push_back(15); // 11 5 15
    list_2.push_back(1);  // 11 5 15 1 
    list_2.push_back(13); // 11 5 15 1 13
    list_2.sort();        // 1 5 11 13 15

    // list_1.merge(list_2);
    // cout << "After merging of list_1 : " ;
    // display(list_1) ;
    // list_1.unique(); // remove duplicate data like 5 occures two times !
    // display(list_1);
    
    // Reverseing the list :
    cout << "list_2 Before Reverse : " ;
    display(list_2);
    list_2.reverse();
    cout << "list_2 after Reverse : " ;
    display(list_2);

    // swap of list :
    list_1.swap(list_2); // change content of both lists !
    cout << "After swap list_1 : " ;
    display(list_1);
    cout << "After swap list_2 : " ;
    display(list_2);

    // instead of all of this code, use display function() :
    /*
    list<int> :: iterator iter ;
    iter = list_1.begin() ; // points to first 'begin' element !
    cout << *iter << " " ; // Output : 5 .
    iter++ ; // Now points to next element to begin element !
    cout << *iter << endl ; // Output : 7 .
    */
    return 0;
}