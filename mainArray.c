#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
display();

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
