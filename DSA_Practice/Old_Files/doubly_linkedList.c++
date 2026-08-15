#include<iostream>
using namespace std ;

class node{
    public:
    int data ;
    node* prev ;
    node* next ;

    // Constructor :
    node(int value){
        data = value;
        prev = NULL ;
        next = NULL ;
    };

    // Destructor :
    ~node(){
        if(this -> next != NULL){
            delete next ;
            next = NULL ;
        };
    };

};

// insertion at the begninning of doubly linked list :
void insert_at_head(node* &head,int d){
    
    node* temp = new node(d);
    head -> prev = temp ;
    temp -> next = head ;
    head = temp ;

};

// inserting at tail in doubly linked list :
void insert_at_tail(node* &tail,int data){
    
    node* temp = new node(data);
    tail -> next = temp ;
    temp -> prev = tail ;
    tail = temp ;

};

// inserting at any position in doubly linked list :
void insert_at_position(node* &head,int position,int data,node* &tail){

    if(position == 1){
        insert_at_head(head,data);
        return ;
    }

    node* insert = new node(data);
    node* temp = head ;
    int i = 1;
    while(i < position-1 ){
        temp = temp -> next ;
        i++ ;
    }       

    if(temp -> next == NULL){
        insert_at_tail(tail,data);
        return ;
    }

    // insert :
    insert -> next = temp -> next ;
    temp -> next -> prev = insert ;
    temp -> next = insert ;
    insert -> prev = temp ;

};

// Delete any node in linked list :
void delete_a_node(node* &head,int value,node* &tail){
    
    // find position :
    node* temp = head ;
    int pos = 1 ;
    int loc = 0 ;
    while(temp != NULL){
        if(temp -> data == value){
            loc = pos ;
            break ;
        }else{
            temp = temp -> next  ;
            pos ++ ;
        };
    };

    temp = head ;
    if(pos == 1){
        temp -> next -> prev = NULL ;
        head = temp -> next ;
        temp -> next = NULL ;
        delete temp ;
    }else{
        int i = 1;
        node* curr_node = head ;
        node* prev_node = NULL ;

        while(i <= (pos-1) ){
            prev_node = curr_node ;
            curr_node = curr_node -> next ;
            i++ ;
        };

    if(curr_node -> next == NULL){
        tail = prev_node ;
    };
        curr_node -> prev = NULL ;
        prev_node -> next = curr_node -> next ;
        curr_node -> next = NULL ;
        delete curr_node ;
    };
}

// traversing :
void show(node* &head,node* &tail){

    int len = 0 ;
    node* temp = head ;
    while(temp != NULL){
        cout << temp -> data << " " ;
        len ++ ;
        temp = temp -> next ;
    }
    cout << endl ;

    cout << "Length of linked list is : "<< len << endl ;
    cout << "Where Head is : "<< head -> data << endl ;
    cout << "And Tail is : "<< tail -> data << endl ;
};

int main(){

    node* node_1 = new node(10);

    node* head = node_1 ;
    node* tail = node_1 ;
    
    insert_at_tail(tail,20);
    insert_at_head(head,5);
    insert_at_position(head,3,15,tail);
    delete_a_node(head,5,tail);
    delete_a_node(head,20,tail);

    show(head,tail);
    return 0;
}