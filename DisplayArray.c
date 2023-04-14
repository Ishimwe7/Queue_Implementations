#include <stdio.h>
#include <stdlib.h>
#define maxSize 10

int queue[maxSize];
int front, reer,counts;
 front = -1;
 reer =-1;

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
