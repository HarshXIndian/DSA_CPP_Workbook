// Array Deletion Operation : 
#include<iostream>
using namespace std ;
int main(){
    int array[10],size,i,position,delete_element ;
    cout <<"Enter the number of elements you want to enter ? : " ;
    cin >> size ;
    cout << "Enter the " << size << " Elements : " << endl ;
    for ( i = 0; i < size ; i++) cin >> array[i] ;
    cout << "Enter the element you want to be delete : " ;
    cin >> delete_element ;
    for( i = 0 ; i < size ; i++ ) if(array[i] == delete_element ) position = i ;
    for( i = position ; i < size ; i++ ) array[i] = array[i+1] ;
    size--;
    cout << "Elements in the array after Operation are : " << endl ;
    for ( i = 0; i < size ; i++) cout << "Element on the array[" << i << "] is : " << array[i] << endl ;
    return 0;
}