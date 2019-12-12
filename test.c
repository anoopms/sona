#include <stdio.h>
#include "conio.h"

#define True 1
#define False 0

#define MAX 100

typedef struct stack {
    int item[MAX];
    int top;
}stk;

int myadd(int a, int b);
void push();
void pop();

void main() 
{
    int choice;
    stk s;
    
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
                break;
        }
        getch();
    } while(choice != 3);
}

void push() {
    printf("Push\n");
}

void pop() {
    printf("Pop\n");
}
