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

void main(){
    int choice;
    printf("WELCOME TO OUR PROGRAM!\n\n");
    do{
    printf("Enter: \n 1.Insert\n 2.Delete\n 3.Display\n 0.Exit\n\n");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        display();
        break;
    case 0:
        printf("\n\nThank you for using our program. Bye!!\n");
        return;
    default:
        printf("Invalid Choice. Try again\n\n");
    }
}
while(choice!=0);
}
