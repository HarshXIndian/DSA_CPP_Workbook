// Creating a node of simple linked list 
#include<iostream>
using namespace std ;

class node{
    public :
    int data;
    node* next;

    // node constructor :
    node(int val){
        data = val ;
        next = NULL ;
    };

    // node destructor :
    ~node() {
        int value = this -> data ;
        if(this -> next != NULL){
            // memory free :
            delete next ;
            this -> next = NULL ;
        }
        cout << "Memory is free for node with data " << value << endl ;
    }
};

// insert at head :
void insertAtHead(node* &head,int d){

    //new node create 
    node* temp = new node(d);
    temp -> next = head ;
    head = temp ;

};

// insert at tail :
void insertAtTail(node* &tail,int d){

    node* temp = new node(d) ;
    tail -> next = temp ;
    tail = tail -> next ;

};

// insert at any Position :
void insertAtPosition(node* &tail,node* &head,int position,int d){
    
    // if position is one :
    if(position == 1){
        insertAtHead(head,d);
        return ;
    };

    node* temp = head ;

    for(int i = 1 ; i < position-1 ; i++ ){
        temp = temp -> next ;
    };

    // if position is last :
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return ;
    };

    // creating a node for new data 
    node* nodeToInsert = new node(d);

    // if position is middle :
    nodeToInsert -> next = temp -> next ;
    temp -> next = nodeToInsert ;
};

// delete any node :
void delete_node(int position , node* &head, node* &tail){

    // Delete first or start node :
    if(position == 1){ 
        node* temp = head ;
        head = head -> next ;
        // free memory :
        temp -> next = NULL ;
        delete temp ;
    }
    // Delete any middle or last node :
    else{  
        node* current = head ;
        node* prev = NULL ;

        for(int i = 1 ; i < position ;i++){
            prev = current ;
            current = current -> next ;
        };

        prev -> next  = current -> next ;

        if(current -> next == NULL){
           tail = prev ;
        };
        current -> next = NULL ;
        delete current ;
    }
};

// travarsing the linked list :
void print(node* &head){
    node* temp = head ;
    while (temp != NULL)
    {
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
}

int main(){
    
    // creating a new node / first node :
    node* node_1 = new node(10) ;

    // cout << node_1 -> data << endl ;
    // cout << node_1 -> next << endl ;

    // head pointed to first node:
    node* head = node_1 ;
    // tail pointed to last node :
    node* tail = node_1 ;


    insertAtHead(head, 05);
    
    insertAtTail(tail, 15);

    insertAtTail(tail, 25);

    insertAtPosition(tail,head,4,20);

    print(head); // traversing :

    cout << "Head : " << head -> data << endl ;
    cout << "Tail : " << tail -> data << endl ;

    delete_node(5,head,tail);

    print(head) ; // traversing :

    cout << "Head : " << head -> data << endl ;
    cout << "Tail : " << tail -> data << endl ;

    return 0;

}