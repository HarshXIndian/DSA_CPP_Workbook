// Array Insertion Operation ;

#include<iostream>
using namespace std ;

int main(){
    int array[10],size,i,position,inserted_element ;

    cout <<"Enter the number of elements you want to enter ? : " ;
    cin >> size ;

    cout << "Enter the " << size << " Elements : " << endl ;
    for ( i = 0; i < size ; i++)
    {
        cin >> array[i] ;
    }
    
    cout << "Enter the element you want to be insert : " ;
    cin >> inserted_element ;

    cout << "Enter the position where you want to insert " << inserted_element << " element : ";
    cin >> position ;

    for ( i = size ; i >= position ; i-- )
    {
        array[i] = array[i-1] ;
    }
    
    array[position - 1] = inserted_element ;
    size++ ;

    cout << "Elements in the array after Operation are : " << endl ;
    for ( i = 0; i < size ; i++)
    {
        cout << "Element on the array[" << i << "] is : " << array[i] << endl ;
    }
    return 0;
}