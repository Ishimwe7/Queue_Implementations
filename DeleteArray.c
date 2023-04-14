#include <stdio.h>
#include <stdlib.h>
#define maxSize 10

int queue[maxSize];
int front, reer,counts;
 front = -1;
 reer =-1;

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
            reer--;
        }
        for(int i=front;i<reer-1;i++){
            queue[i]=queue[i+1];
        }
     printf("\n%d deleted Successfully\n\n", data);
     counts--;
     display();
    }
}
