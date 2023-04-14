#include <stdio.h>
#include <stdlib.h>
#define maxSize 10

int queue[maxSize];
int front, reer,counts;
 front = -1;
 reer =-1;
void enqueue(){
    int value;
    if(reer==maxSize-1){
        printf("Queue is Overflow\n");
    }
    else{
        printf("Enter value you want to insert..");
        scanf("%d", &value);
        if(front==-1 && reer==-1){
            front=0;
            reer=0;
        }
        else{
            reer++;
        }
        queue[reer]=value;
        printf("\nValue inserted Successfully\n");
        counts++;
        display();
    }
}

void dequeue(){
    int data;
    if(front==-1){
        printf("\nQueue is Underflow\n\n");
        return;
    }
    else{
        data=queue[front];
        if(reer==0 && front==0){
            reer=-1;
            front=-1;
        }
        else{
            front++;
        }
        for(int i=front;i<reer-1;i++){
            queue[i]=queue[i+1];
        }
     printf("\n%d deleted Successfully\n\n", data);
     counts--;
     display();
    }

}

void display(){
    if(front==-1){
        printf("\nQueue is Empty\n\n");
    }
    else{
    printf("\nQueue is now having %d element(s) below: \n", counts);
    for(int i=front;i<=reer;i++) {
        printf("%d\t", queue[i]);
    }
    printf("\n\n");
    }

}

void main() {
        int choice;
    printf("WELCOME TO OUR PROGRAM!\n\n");
    do{
    printf("\nEnter: \n 1.Insert \n 2.Delete \n 3.Display \n 0.Exit\n\n");
    printf("Enter your choice..");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 0:
        printf("\n\nThank you for using our program. Bye!!\n\n");
        return;
    default:
        printf("\nInvalid choice. Try Again!\n\n");
    }
    }
    while(choice!=0);
}
