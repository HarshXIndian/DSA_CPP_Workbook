// Algorithms in STL !
// Algorithms in STL by love babber !
// Date : 07-03-2024 .

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

void display(vector<int> &vec)
{
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}

void show(int x)
{
    cout << x << " ";
}

int main()
{
    vector<int> v = {5,6,7,8,9} ;
    vector<int>::iterator it;

    // --------------------> By Love Babber :

    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(9);

    // list<int> l ;
    // l.push_back(1);
    // l.push_back(4);
    // l.push_front(6);
    // l.insert(l.begin(),2);

    // cout << "List Before Reverse Operation : " ;
    // for(auto i : l){
    //     cout << i << " " ;
    // };
    // cout << endl ;
    // l.reverse();
    // cout << "List After Reverse Operation : " ;
    // for(auto i : l){
    //     cout << i << " " ;
    // };
    // cout << endl ;

    // cout << "Our Vector is : " ;
    // display(v);
    // // Binary Search :
    // cout << "Binary Search for find 4 : " << binary_search(v.begin(),v.end(),4) << endl ;
    // cout << "Where , Lower bound is   : " << lower_bound(v.begin(),v.end(),4)-v.begin() << endl ;
    // cout << "Binary Search for find 7 : " << binary_search(v.begin(),v.end(),7) << endl ;
    // cout << "Where , Lower bound is   : " << lower_bound(v.begin(),v.end(),7)-v.begin() << endl ;
    // cout << "Binary Search for find 8 : " << binary_search(v.begin(),v.end(),8) << endl ;
    // cout << "Where , Lower bound is   : " << lower_bound(v.begin(),v.end(),8)-v.begin() << endl ;

    // int a = 3 ;
    // int b = 5 ;
    // cout << "Max(a,b) : " << max(a,b) << endl ;
    // cout << "Min(a,b) : " << min(a,b) << endl ;
    // cout << "Before Swap(a,b) :\n" << "a -> " << a << "\nb -> " << b << endl ;
    // swap(a,b);
    // cout << "After Swap(a,b) :\n" << "a -> " << a << "\nb -> " << b << endl ;

    // --------------------------------> NON MODIFYING SEQUENCE OPERATIONS BY CPLUSPLUS WEBPAGE !

    // Applies function fn to each of the elements in the range [first,last).
    
    for_each(v.begin(), v.end(), show);
    it = find(v.begin(),v.end(),7) ; // find will point iterator to find element !
    if (it != v.end()) cout << "Element found : " << *it << '\n';
    else cout << "Element not found " << endl ;

    // Returns the number of elements in the range [first,last) that compare equal to val.
    vector<int> vec = {3,2,3,4,3,3,5,2};
    vector<int> vec2(vec) ;

    cout << "2 Repeated " << count(vec.begin(),vec.end(), 2) << " Times." << endl ;
    cout << "3 Repeated " << count(vec.begin(),vec.end(), 3) << " Times." << endl ;
    
    // Compares the elements in the range [first1,last1) with those in the range beginning at first2,
    // and returns true if all of the elements in both ranges match.
    if(equal(vec.begin(),vec.end(),vec2.begin())) cout << "Both Vectors are same ." << endl;
    else cout << "Both Vectors are Different !" << endl ;
    
    // match between vector v and vec .
    if(equal(vec.begin(),vec.end(),v.begin())) cout << "Both Vectors are same ." << endl;
    else cout << "Both Vectors are Different !" << endl ;

    vector<int> vc = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vc2 = {4,5} ;

    it = search(vc.begin(),vc.end(),vc2.begin(),vc2.end());
    if( it != vc.end() ) cout << "vc found at position : " << (it-vc.begin()) << endl ;
    else cout << "vc Not Found !" << endl ;
    
    // vector<int> vec = {3,2,3,4,3,3,5,2};
    it = search_n(vec.begin(),vec.end(),2,3); // Searching for 3 , repeated 2 times.
    if( it != vec.end() ) cout << "Two 3s found at position : " << (it-vec.begin()) << endl ;
    else cout << "Match Not Found !" << endl ;

    return 0;
}