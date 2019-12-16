#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "conio.h"

#define True 1
#define False 0

#define MAX 100

typedef struct stack {
    int item[MAX];
    int top;
}stk;

int myadd(int a, int b);
void push(stk *s, int element);
int pop(stk *s);
void createstack(stk *s);
void infixToPostfix(stk *s, char *in, char *po);
void printstack(stk *s);
int isOperator(char op);
int precedence(char op);
int operEvaluate(int op1, int op2, char operator);
int evaluatePostfix(stk *s, char* postfix);

void main() 
{
    char infix[MAX] = {0};
    char postfix[MAX] = {0};
    stk s;
    int final = 0;

    createstack(&s);

    do {
        printf("Enter the infix expression\n");
        scanf("%s", infix);
        infixToPostfix(&s, infix, postfix);
        printf("POSTFIX %s\n", postfix);
        final = evaluatePostfix(&s, postfix);
        printf("FINAL=%d\n", final);
        
    } while(infix[0] != '_');
}

int evaluatePostfix(stk *s, char* postfix) {
    char op1, op2, res;
    int i;
    char operand[2];

    createstack(s);

    for (i = 0; i < strlen(postfix); i++) {
        if(isOperator(postfix[i])) {
            op1 = pop(s);
            op2 = pop(s);
            res = operEvaluate(op1, op2, postfix[i]);
            push(s, res);
        } else {
            operand[0] = postfix[i];
            operand[1] = '\0';
            push(s, atoi(operand));
        }
    }
    return s->item[0];
}

int operEvaluate(int op1, int op2, char operator) {
    int a, b, res = 0;
    
    switch (operator) {
        case '+':
            res = op1 + op2;
            break;
        case '-':
            res = op1 - op2;
            break;
        case '/':
            res = op1 / op2;
            break;
        case '*':
            res = op1 * op2;
            break;
    }
    return res;
}

void infixToPostfix(stk *s, char *in, char *po) {
    int i, j = 0, popped, preStack, preOp;

    for (i = 0; i < strlen(in); i++) 
    {
        if(in[i] == ' ' || in[i] == '\t' || in[i] == ',') 
        {
            continue;
        }
        
        if(in[i] == '(') {
            push(s, in[i]);
        }

        else if (isOperator(in[i]))
        {
            preStack = precedence(s->item[s->top]);
            preOp = precedence(in[i]);
            while(preStack >= preOp) 
            {
                po[j++] = pop(s);
                preStack = precedence(s->item[s->top]);
            }
            push(s, in[i]);
        }
        else if(in[i] == ')')
        {
            popped = pop(s);
            while(popped != '(') 
            {
                po[j++] = popped;
                popped = pop(s);
            }
        }
        else
        {
            po[j++] = in[i];
        }
    }

    while(s->top != -1) {
        po[j++] = pop(s);
    }

    po[j] = '\0';
}


int isOperator(char op) {
    switch (op) {
        case '^':
        case '+':
        case '-':
        case '/':
        case '*':
            return True;
    }
    return False;
}

int precedence(char op) {
    switch (op) {
        case '^':
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
    }
    return 0;
}

void push(stk *s, int element) {
    if(s->top ==  MAX - 1) {
        printf("Overflow\n");
    } else {
        s->top = s->top + 1;
        s->item[s->top] = element;
    }
}

int pop(stk *s) {
    int p;
    if(s->top == -1) {
        printf("Underflow");
    } else {
        p = s->item[s->top];
        s->top = s->top - 1;
    }
    return p;
}

void createstack(stk *s) {
    s->top = -1;
}

void printstack(stk *s) {
    int i;
    for (i = 0; i <= s->top; i++) {
        printf("%c ", s->item[i]);
    }
    printf("\n");
}
