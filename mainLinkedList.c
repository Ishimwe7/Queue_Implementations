#include <stdio.h>
#include <stdlib.h>

void insert();
void delete();
void display();

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
