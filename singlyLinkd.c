// 8 7 -2 1 9 
#include<stdio.h>
#include<stdlib.h>

typedef struct mylist
{
    int data ;
    struct mylist *next ; 
} node ; //derclear varibale 


int main(){

    node *frist     = (node*) malloc(sizeof(node)) ;
    node *second    = (node*) malloc(sizeof(node)) ;
    node *third     = (node*) malloc(sizeof(node)) ;
    node *forth     = (node*) malloc(sizeof(node)) ;
    node *fiveth    = (node*) malloc(sizeof(node)) ;

    frist->data     = 8  ; 
    second->data    = 7  ; 
    third->data     = -2 ;
    forth->data     = 1  ;
    fiveth->data    = 9  ;


    //connection create 

    frist->next     = second ;
    second->next    = third  ;
    third->next     = forth  ; 
    forth->next     = fiveth ;
    fiveth->next    = NULL   ; 


    return 0 ;
}
