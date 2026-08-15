// Tutorial #52
// Array of Objects using Pointers by code with harry !
// Date : 27/02/2024

#include<iostream>
using namespace std;

class Shop{
    int id ;
    float price ;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout << "ID : " << id << endl ;
            cout << "Price : " << price << endl ;
        }
};

int main(){
    int size ;
    cout << "Enter the Number of Items : " ;
    cin >> size ;
    Shop *ptr = new Shop[size] ;
    int id_number ;
    float Price_tag ;
    Shop *Temp_ptr = ptr ;
    for (int i = 0; i < size ; i++)
    {
        cout << "Enter the Data For Item Number " << i + 1 << " : " << endl ;
        cout << "Item Id : " ;
        cin >> id_number ;
        cout << "Item Price : " ;
        cin >> Price_tag ;
        ptr -> setData(id_number, Price_tag);
        ptr++ ;
    }

    cout << "<------------------- Record Of Items ------------------->" << endl ;
    for (int i = 0; i < size; i++)
    {
        cout << "Data of Item Number " << i + 1 << " is : " << endl ;
        Temp_ptr -> getData() ;
        Temp_ptr ++ ;
    }
    
    return 0 ;
}