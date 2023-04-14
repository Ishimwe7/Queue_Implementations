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
