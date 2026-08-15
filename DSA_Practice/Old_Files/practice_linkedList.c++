#include<iostream>
using namespace std ;

class node{
    public:
    int data ;
    node* next ;

    node(int value){
        data = value ;
        next = NULL ;
    }
};

void insertion(node* &tail,int data){

    node* temp = new node(data);

    tail -> next = temp ;
    tail = temp ;

};

void rev(node* &head,node* curr,node* prev){

    // BASE CASE :
    if(curr == NULL){
        head = prev ;
        return ;
    }

    rev(head,curr -> next , curr);
    curr -> next = prev ;
};

// reverse the linked list :
void reverse(node* &head){

    if(head == NULL){
        return ;
    }

    node* curr = head ;
    node* prev = NULL ;

    // By recursion 
    rev(head,curr,prev);

    // By normal method :
    // node* forward = curr -> next ;
    // while(curr != NULL){
    //     forward = curr -> next ;
    //     curr -> next = prev ;
    //     prev = curr ;
    //     curr = forward ;
    // }   
    // head = prev ;
};

// traversing :
void show(node* &head){

    node* temp = head ;

    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
};

int main(){

    node* new_node = new node(10);
    
    node* head = new_node ;
    node* tail = new_node ;

    insertion(tail,20) ;
    insertion(tail,30);
    insertion(tail,40);
    reverse(head);
    show(head);
    return 0;

}