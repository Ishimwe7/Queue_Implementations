#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*front,*reer,*ptr;

int counts;

void insert(){
    int value;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Queue overflow\n\n");
    }
    else{
        printf("Enter a value you want to insert..");
        scanf("%d", &value);
        ptr->data=value;
        ptr->link=NULL;
        if(front==NULL){
            front=reer=ptr;
        }
        else{
            reer->link=ptr;
            reer=ptr;
        }
        printf("\nNode inserted Successfully\n\n");
        counts++;
        display();
    }
}
