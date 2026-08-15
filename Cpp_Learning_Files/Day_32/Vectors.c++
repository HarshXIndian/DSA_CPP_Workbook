// Vectors in STL , C++
// Tutorial #71

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0 ; i < v.size() ; i++ ){
        // cout << "  " << v[i] ;
        cout << "  " << v.at(i) ; // Returns a reference to the element at position i in the vector.
    };
    cout << endl ;
}

int main(){
    // Ways to create a vector :
    // vector<int> vec_1 ; // 0 length vector with 'integer' data type 
    // vector<char> vec_2(5) ; // 5 element length vector with 'char' data type 
    // vector<char> vec_2(vec_2) ; // 5 element length vector from vec_2  
    // vector<float> vec_3(6,1) ; // 6 elements length vector with 6 elements , where each element contain value '1' .

    vector<int> myVector ;

    cout << "Is Vector Empty ? : " << myVector.empty() << endl ; // Returns whether the vector is empty (i.e. whether its size is 0).
    for (int i = 0 ; i < 10 ; i++ ) 
    myVector.push_back(i+1); // push_back : Returns a reference to the last element in the vector.
    // push_back : Adds a new element at the end of the vector, after its current last element.
    cout << "size : " << myVector.size() << endl ; // Returns the number of elements in the vector.
    cout << "capacity : " << myVector.capacity() << endl ; // Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
    myVector.reserve(20); // Reserves storage for at least 20 elements, but does not initialize them , Requests that the vector capacity be at least enough to contain n elements.
    cout << "capacity after Reservation : " << myVector.capacity() << endl ;
    myVector.shrink_to_fit(); // Requests the container to reduce its capacity to fit its size.
    cout << "capacity after Shrinking : " << myVector.capacity() << endl;
    cout << "max_size : " << myVector.max_size() << endl ; // Returns the maximum number of elements that the vector can hold.
    
    // Resize function can be used to change the size of the vector :
    myVector.resize(5); // Resizes the container so that it contains 5 elements. so that content is reduced to its first 5 elements , removing those beyond !
    display(myVector);
    myVector.resize(8,100); // Changes the size of the vector and assigns value 100 to all new elements if any are added.
    display(myVector);
    myVector.resize(12); // Changes the size of the vector and expend it to 12 .
    display(myVector);
    myVector.resize(10); // changes the size of the vector and set it to 10 !
    display(myVector);

    cout << "Is Still Vector Empty : " << myVector.empty() << endl ;

    cout << "myVector.front() is : " << myVector.front() << endl ; 
    myVector.front() = 7 ; // Returns a reference to the first element in the vector.
    cout << "myVector.front() is now : " << myVector.front() << endl ; 

    int *ptr = myVector.data() ; // Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    cout << *ptr << endl ;

    myVector.push_back(400);
    display(myVector);
    myVector.pop_back(); // Removes the last element in the vector, effectively reducing the container size by one.
    display(myVector);
    
    vector<int> first ;
    // Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
    first.assign(5,1) ; // will assign 5 ints with a value 1 .
    for(int i = 0 ; i < first.size() ; i++ ) first.at(i)=(i+1);
    display(first);
    first.erase(first.begin()+4); // Erases one element from the position pointed by iterator , Erase the 6th element !
    display(first);
    first.erase(first.begin(),first.begin()+3); // Erase the first 3 elements !
    display(first);

    // Exchanges the content of the container by the content of x, which is another vector object of the same type. Sizes may differ.
    display(myVector);
    display(first);
    myVector.swap(first);
    display(myVector);
    display(first);

    myVector.clear(); // Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
    cout << myVector.size() << endl ;

    // Itrator Declaration :
    vector<int> :: iterator iter = first.begin() ; // itrator 'iter' now points to first vector's first element as we provide .begin() !
    first.insert(iter + 1 , 2 , 8);
    display(first);
    return 0 ;
}
