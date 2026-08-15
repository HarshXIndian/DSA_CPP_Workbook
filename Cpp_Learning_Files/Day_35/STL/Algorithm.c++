// Algorithms in STL C++ By Cplusplus webpage !
// Date : 8/3/24

// -------------------------------------> MODIFYING SEQUENCE OPERATIONS !

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void display(vector<int> &v){
    vector<int> :: iterator it ;
    it = v.begin();
    for(it = v.begin() ; it != v.end() ; it++ ){
        cout << (*it) << " " ;
    }
    cout << endl ;
};

void show(vector<string> &str){
    vector<string> :: iterator iter ;
    iter = str.begin();
    for(iter = str.begin() ; iter != str.end() ; iter++ ){
        cout << "[" << (*iter) << "]" << " " ;
    }
    cout << endl ;
};

int main(){
    vector<int> v = {10,20,30,40,50} ;
    vector<int> vec ;

    // copy :
    // vec.resize(4);
    // copy_n(v.begin() , 4 , vec.begin()); // It copies the first four elements of 'vec' from values array to 'vec'.
    // // int myValues[] = {1,2,3,4,5,6,7} ;
    // // copy_n(myValues , 4 , vec.begin()); // It will copy the first four elements of array to vector at beginning .
    // display(vec);

    // Moving :
    // 1. Moving Ranges :
    vector<string> tatvas = {"air","water","universe","fire","earth"};
    vector<string> powers(5) ;
    vector<string> :: iterator i ;
    i = powers.begin() ;
    // cout << "Tatvas Contains " << tatvas.size() << " elemetns : " ;
    // show(tatvas) ;  
    // cout << "Before moving the elements to powers : " ;
    // for(auto i : powers ){
    //     cout << i << " " ;
    // }
    // cout << endl ;
    // move(tatvas.begin(),tatvas.end(),powers.begin()) ;
    // cout << "After moving the elements to powers : " ;
    // for(auto i : powers ){
    //     cout << "[" << i << "]" << " " ;
    // }
    // cout << endl ;

    // 2. Moving containers :
    // cout << "Elements in powers Before moving from tatvas :\n";
    // show(powers) ;
    // cout << "Elements in tatvas :\n";
    // show(tatvas);
    // powers = move(tatvas);
    // cout << "Elements in powers after moving from tatvas :\n";
    // show(powers) ;
    // cout << "Elements in tatvas :\n";
    // show(tatvas);

    // Swap :
    vector<int> v1 = {6,8,9,10,8,8};
    vector<int> v2 = {60,80,90,100};
    // cout << "Before swap : " << endl;
    // cout << "v1 : " ;
    // display(v1);
    // cout << "v2 : " ;
    // display(v2);
    // cout << "After swap : " << endl;
    // cout << "v1 : " ;
    // display(v1);
    // cout << "v2 : " ;
    // display(v2);

    // Replace :
    // display(v1);
    // replace(v1.begin() , v1.end(), 8,0); //  replaces all occurances of '8' with '0' in v1.
    // display(v1);

    // Remove :
    // remove(v1.begin(),v1.end(),8); // It removes all occurrences of '8' from v1 .
    // display(v1);

    // Reverse :
    // reverse(v2.begin(),v2.end()); // it reverses the order of elements in the vector.
    // display(v2);

    // Fill :
    // vector<int> f(5,0) ;
    // display(f);
    // cout << "f size : " << f.size() << endl ;
    // fill(f.begin(),f.end()-1,2); // It fills the elements till one before last element with '2'.
    // cout << "f : " ;
    // display(f);
    // cout << "f size : " << f.size() << endl ;

    // Fill_n :
    // fill_n(f.begin(),2,10); // It fills first two elements of vector 'f' with '10'.
    // display(f);
    // cout << "f size : " << f.size() << endl ;

    // Genrate :
    vector<int> g(10) ;
    // generate(g.begin(),g.end(),rand); // Generates random numbers and stores them in vector
    // display(g);

    // Genrate_n :
    // generate_n(g.begin(),7,rand); // Generate only 7 random numbers starting from index 0 to 6.
    // display(g);

    // Unique : not working !
    vector<int> u = {1,2,2,5,3,2,1};
    // vector<int> :: iterator iu ;
    // iu = unique(u.begin(),u.end()) ; // Removes duplicate elements from a container.
    // u.resize(distance(u.begin(),iu)); // Resize the vector to its actual size after removing duplicates.
    // cout << "Unique Elements in u are : ";
    // // display(u);
    // for(iu = u.begin() ; iu != u.end() ; iu++ ){
    //     cout << (*iu) << " " ;
    // }
    // cout << endl ;
    
    // Rotate : Rotate left the elements in range !
    vector<int> n ; 
    for(int i = 1 ; i < 11 ; i++ ) n.push_back(i); // 1 2 3 4 5 6 7 8 9 10
    // display(n);
    // rotate(n.begin(),n.begin()+4,n.end()); // 5 6 7 8 9 10 1 2 3
    // display(n);

    // Random Shuffle :
    // random_shuffle(n.begin(),n.end());
    // display(n);
    
    return 0;
}