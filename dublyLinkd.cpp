#include<iostream>
using namespace std ;

class node{

    public:
    int data ; 
    node *next ; 
    node *prev ; 

    node(int val){
        data = val ;
        next = NULL;
        prev = NULL ; 
    }
};

void insertAtHead(node* &head , int val){
    node* n = new node(val);

    n->next = head;
    if(head != NULL){
        head->prev = n ; 
    }
    
    head = n ; 
}

void insertAtTeil(node* &head , int val){

    if(head==NULL){
        insertAtHead(head , val);
            return ;        
    }
    node* n = new node(val);
    node* temp = head ; 
    while (temp->next != NULL){
        temp = temp->next ;
    }
    temp->next = n ;
    n->prev = temp ; 
    
}

void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout <<temp->data << " ";
        temp = temp->next;
    }
    cout << endl ; 
}


void deletAtHead(node* &head){
    node* todelete = head ;
    head = head->next ; 
    head->prev = NULL ; 

    delete todelete ; 
}
void delateion(node* &head , int pos){

    if(pos == 1){
        deletAtHead(head);
        return ; 
    }
    node* temp = head ; 
    int count = 1 ;
    while(temp !=NULL && count != pos){
        temp = temp->next ; 
        count++ ;
    }

    temp->prev->next = temp->next ;
    if(temp->next != NULL){
        temp->next->prev = temp->prev ;
    }
    
    delete temp ; 
}

int main(){

    node* head = NULL ;//call fuction
    insertAtTeil(head , 1);
    insertAtTeil(head , 2);
    insertAtTeil(head , 3);
    insertAtTeil(head , 4);
    // insertAtTeil(head , 5);
    display(head);
    insertAtHead(head , 6);
    display(head);
    delateion(head , 5);
    display(head);

    return 0;
}