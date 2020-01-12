#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 2
#define true 1
#define false 0
typedef struct stack
{
int rear;
int front;
int item[max];
}stk;
void push(stk *,int);
int pop(stk *);
void creates(stk *);
void main()
{
int choice;
int value;
stk s;
creates(&s);
do
{
clrscr();
printf("1.push\n");
printf("2.pop\n");
printf("3.exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item\n");
       scanf("%d",&value);
       push(&s,value);
       getch();
       break;
case 2:
       value=pop(&s);
       if(value==0)
       {
       printf("underflow\n");
       }
       else
       {
       printf("the value is%d",value);
       }
       getch();
       break;
case 3:exit(0);
       break;
       }
       }while(true);
       }

       void creates (stk *s)
       {
       s->rear=-1;
       s->front=-1;
       }
void push(stk *s,int element)
{
if(s->rear==max-1)
{
printf("overflow\n");
}
else
{
s->rear=s->rear+1;
s->item[s->rear]=element;
printf("the item stored\n");
}

}
int pop(stk *s)
{
int p;
p=s->item[s->front];
s->front=s->front+1;
return p;
}
