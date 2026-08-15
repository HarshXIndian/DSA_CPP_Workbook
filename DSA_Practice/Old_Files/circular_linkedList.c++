#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node* next ;

    // constructor :
    node(int value){
        data = value ;
        next = NULL ;
    };

    // destructor :
    ~node(){
        if(this -> next != NULL ){
            delete next ;
            next = NULL ;
        };
    };
};

void insert_node(node* &tail,int element ,int data){

    // if list is empty :
    if(tail == NULL){
    node* temp = new node(data);
    tail = temp ;
    temp -> next = temp ;
    }else{
    // if list have elements :
    node* curr = tail ;
    while(curr -> data != element){
        curr = curr -> next ;
    }

    node* temp2 = new node(data);
    temp2 -> next = curr -> next ;
    curr -> next = temp2 ;
    } 

};

void delete_node(node* &tail,int data){

    // empty list 
    if(tail == NULL){
        cout << "List is Empty Brother ;) " << endl ;
    }else{
        // non-empty :

        // when value is prsents :
        node* prev_node = tail ;
        node* curr_node = prev_node -> next ;

        
        while(curr_node -> data != data){
            prev_node = curr_node ;
            curr_node = curr_node -> next ;
        }

        // when only one node is prsent in linked list :
        if(curr_node == prev_node){
            tail = NULL ;
        }

        // when only two nodes are prsent in linked list :
        if(tail == curr_node){
            tail = prev_node ;
        }

        prev_node -> next = curr_node -> next ;
        curr_node -> next = NULL ;
        delete curr_node ;
    }
};

void show(node* &tail){
    if(tail == NULL){
        cout << "List is Empty Brother ;) " << endl ;
        return ;
    }
    node* temp = tail ;
    do{
        cout << tail -> data << " " ;
        tail = tail -> next ;
    }
    while(tail != temp);
    cout << endl ;
};

int main(){
    node* tail = NULL;

    // empty list 
    insert_node(tail,10,3);
    show(tail);
    // insert_node(tail,3,5);
    // show(tail);
    // insert_node(tail,3,8);
    // show(tail);
    // insert_node(tail,5,9);
    // show(tail);
    // insert_node(tail,3,7);
    // show(tail);
    delete_node(tail,3);
    show(tail);
    return 0 ;
};