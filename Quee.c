#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5

int ourQueue[CAPACITY] ;
int fornt = 0 , rear = -1 , totalItem = 0;

bool isFull(){
    if(totalItem == CAPACITY){
        return true;
    }
    return false;
}

bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false ;
}

void enqueue(int item){
    if(isFull()){
        printf("Sorry , the Queue is full .\n");
        return ;
    }
    rear = (rear +1) % CAPACITY ; //work a sercular array.importen line
    ourQueue[rear] = item ; 
    totalItem++;
}
int dequeue(){
    if(isEmpty()){
        printf("Sorry, the Queue is empty.\n");
        return -1 ; 
    }
    int forntItem = ourQueue[fornt] ;
    ourQueue[fornt] = -1 ;
    fornt = (fornt +1 )%CAPACITY ;
    totalItem-- ; 
    return forntItem ;
}

void showQueue(){
    int i ; 
    printf("Queue : ");
    for(i = 0 ; i < CAPACITY ; i++){
        printf("%d ",ourQueue[i]);
    }
    printf("\n");
}

int main(){
    printf("\n************\nlets's Implement Queue\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    showQueue();
    enqueue(50);
    showQueue();
    enqueue(60);
    printf("DeQueue Item : %d\n",dequeue());
    showQueue();
    return 0;
}