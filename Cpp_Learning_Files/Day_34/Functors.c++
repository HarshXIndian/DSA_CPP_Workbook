// Function Objects (Functors) By Code with harry !
// Date: 7/3/24
#include<iostream>
#include<functional> // for use of functors !
#include<algorithm> // for sorting algo's !
using namespace std;

int main(){
    // Function objects (Functor) : function wrapped in a class so that it available like an objects !
     
    int arr[] = {1,73,4,12,54,77};
    sort(arr , arr+5 ); // sort first 5 elements ! (increasing order !)
    for(int i = 0 ; i < 6 ; i++ ){
        cout << arr[i] << "  " ;
    }
    cout << endl ;
    sort(arr,arr+6,greater<int>()); // sort full array in decreasing order !
    for(int i = 0  ; i < 6 ; i++ ){ 
        cout << arr[i] << "  " ;
    }
    cout << endl ;
}
// THE END OF SERIES !