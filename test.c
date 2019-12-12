#include <stdio.h>
#include "conio.h"

int myadd(int a, int b);
void push();
void pop();

void main() 
{
    int choice;
    
    do {
        clrscr();
        printf("\n----Main Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Exit\n");
        printf("Enter yout choice\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("Choice 1\n");
                push();
                break;
            case 2:
                printf("Choice 2\n");
                pop();
                break;
            case 3:
                printf("Choice 3\n");
                exit(0);
                break;
        }
        
    } while(1);
    
    getch();
}

void push() {
    printf("Push\n");
}

void pop() {
    printf("Pop\n");
}
