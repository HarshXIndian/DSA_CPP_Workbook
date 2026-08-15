#include<iostream>
using namespace std ;

class node{
    public :
    int info ;
    node* link ;

    // A Node Constructor !
    node(int data){
        info = data ;
        link = NULL ;
    }

    // A Node Destructor !
    ~node(){
        if(this -> link != NULL ){
            // Free the memory !
            delete link ;
            this -> link = NULL ;
        }
    }
};

// insert an node at the begning of linked list :
void insert_at_head(node* &head,int data){

    // creating a new node for inserting :
    node* temp = new node(data);

    // update head pointer :
    temp -> link = head ;
    head = temp ;
};

// insert an node at the tail/ending of linked list :
void insert_at_tail(int data,node* &tail){

    // creating a node for inserting :
    node* temp = new node(data);

    // update tail pointer
    tail -> link = temp ;
    tail = temp ;

};

// insert an node at any position in linked list :
void insert_at_position(node* &head,int position,int data,node* &tail){

    // creating a node for inserting :
    node* temp = new node(data) ;

    // for first position :
    if(position == 1){
        insert_at_head(head,data);
        return ;
    }

    // for any position :
    node* current = head ;
    // find the position of node for inserting :
    for(int i = 1 ; i < (position-1) ;i++ ){
        current = current -> link ;
    };

    // for last position :
    if(current -> link == NULL ){
        insert_at_tail(data,tail);
        return ;
    };

    // inserting at given Position :
    temp -> link = current -> link ;
    current -> link = temp ;
};

// find the node position by using data value prsents at node :
void find_position(node* &head,int data){

    int position = 1 ;
    int loc = 0 ;
    node* ptr = head ;
    while(ptr != NULL){
        if(ptr -> info == data){
            loc = position ;
            break;
        }else{
            ptr = ptr -> link ;
            position ++ ;
        };
    };

    if(loc != 0) cout << "Location of node with data value '" << data << "' is : " << loc << endl ;
    else cout << "Node is not available in linked list with given value !" << endl ;

};

// Deleting a node from linked list :
void delete_at_position(node* &head,int position,node* &tail){

    // delete a node from start in linked list :
    if(position == 1){
        node* temp = head ;
        head = head -> link ;
        // free the memory !
        temp -> link = NULL ;
        delete temp ;
    }
    // delete a node from any position in linked list :
    else{
    node* curr = head ; // points the node at given position !
    node* prev = NULL ; // points the previous node of curr node !

    // identifying node at given position :
    for(int i = 1 ; i <= position-1 ; i++){
        prev = curr ;
        curr = curr -> link ;
    };

    // remove the identfied node from list :
    prev -> link = curr -> link ;

    // update tail pointer in case of last node deletion :
    if(curr -> link == NULL){
        tail = prev ;
    }
    // free up memory :
    curr -> link = NULL ;
    delete curr ;
    };
};

// Treverse the linked list :
void show(node* &head,node* &tail){
    node* temp = head ;

    // traversing :
    // count len as well :
    int len = 0;
    cout << "Linked list is : ";
    while(temp != NULL){
        cout << temp -> info << " " ;
        len ++ ;
        temp = temp -> link ;
    };
    cout << " " << endl ;

    // // Count the length of linked list :
    // // Re-assign as temp is already NULL .
    // temp = head ; 
    // int len = 0 ;
    // while(temp != NULL){
    //     len ++ ;
    //     temp = temp -> link ;
    // };

    // showing info of pointers , and length of linked list :
    cout << "Length of Linked List is : " << len << endl ;
    cout << "where Head is :" << head -> info  << endl ;
    cout << "and Tail is :" << tail -> info  << endl ;
};


int main(){

    // Creating a Start/First Node :
    node* node_1 = new node(10);

    // Creating a Pointer Head :
    node* head = node_1 ;

    // Creating a Pointer Tail :
    node* tail = node_1 ;

    // Perform insertion at the beginning of list :
    insert_at_head(head,5);
    insert_at_head(head,0);
    show(head,tail);

    // Perform insertion at the end of list :
    insert_at_tail(15,tail);
    insert_at_tail(20,tail);
    show(head,tail);

    // Perform insertion after given node :
    insert_at_position(head,6,25,tail);
    insert_at_position(head,1,-5,tail);
    show(head,tail);

    // Perform deletion at any Position in list :
    delete_at_position(head,1,tail);
    delete_at_position(head,4,tail);
    show(head,tail);

    // find the position of node in linked list :
    find_position(head,20);

    return 0;
}