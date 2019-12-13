#include <stdio.h>
#include <string.h>
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
void infixToPostfix(stk *s, char *in, char *po);

void main() 
{
    char infix[MAX] = {0};
    char postfix[MAX] = {0};
    stk s;
    
    do {
        printf("Enter the infix expression\n");
        scanf("%s", infix);
        infixToPostfix(&s, infix, postfix);
    } while(infix[0] != '_');
}

void infixToPostfix(stk *s, char *in, char *po) {
    printf("infixToPostfix\n");
    
}

void push() {
    printf("Push\n");
}

void pop() {
    printf("Pop\n");
}
