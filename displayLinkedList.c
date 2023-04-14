#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*front,*reer,*ptr;
int counts;

void display(){
    ptr=front;
    if(front==NULL){
        printf("\n\nQueue is Empty\n\n");
    }
    else{
        printf("Queue is now having %d element(s) below: \n\n", counts);
        while(ptr!=NULL){
            printf("%d\n", ptr->data);
            ptr=ptr->link;
        }
    }
}
