#include<stdio.h>
#include<stdlib.h>

typedef struct mylist{
    int data ; 
    struct mylist *next ;
} node ; 

void insert(node *s , int data){
    while(s->next !=NULL){
        s = s->next ; 
    }
    s->next = (node*) malloc(sizeof(node));
    s->next->data = data ; 
    s->next->next = NULL ; 
}

void display(node *s){
    printf("List are : \n");
    while(s->next !=NULL){
        printf("%d\n", s->next->data);
        s = s->next ; 
    }
}

void serarch(node *s , int data){
    int count = 0 ; 
    while(s->next !=NULL){
        if(s->next->data ==data){
            count++ ;
        }
        s = s->next ;
    }
    printf("Total %d result foutd\n",count);
}

void deleteNode(node *s , int data){
    while(s->next !=NULL){
        if(s->next->data == data){

            s->next = s->next->next ;
            // return 0 ; 
        }
        s= s->next ; 
    }
}



int main(){

    node *first = (node*) malloc(sizeof(node));
    first->next = NULL ; 
    //inserting valu 
    insert(first , 2);
    insert(first , 3);
    insert(first , 4);
    insert(first , 5);
    insert(first , 6);

    display(first);

    serarch(first , 5);

    deleteNode(first , 5);

    display(first);

    return 0 ; 
}