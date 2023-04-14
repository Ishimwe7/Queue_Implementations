#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*front,*reer,*ptr;
int counts;

void delete(){
    int val;
    if(front==NULL){
        printf("\nSorry! Queue is Empty\n\n");
    }
    else{
        ptr=front;
        front=front->link;
        free(ptr);
        printf("\nNode deleted Successfully\n\n");
        counts--;
        display();
    }
}
