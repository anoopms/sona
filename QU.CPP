#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 3
#define true 1
#define false 0
typedef struct stack
{
int front;
int rear;
int item[max];
}stk;
void createqueue(stk*);
void insert(stk *,int);
int delet (stk *);
void main()
{
int choice;
int value;
stk s;
createqueue(&s);
do
{
clrscr();
printf("1.insertr\n");
printf("2.delete\n");
printf("3.exit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
       printf("enther the element");
       scanf("%d",&value);
       insert(&s,value);
       getch();
       break;
case 2:
	value=delet(&s);
	if(value==-1)
	{
	printf("under flow");
	}
	else
	{
	printf("the popped value is%d",value);
	}
	getch();
	break;
case 3:
	exit(0);
	break;
	}
	}
	while (true);
	}
 void createqueue(stk *s)
 {
     s->rear= -1;
     s->front=-1;
 }
 void insert(stk *s,int element)
 {
    printf("%d%d\n",s->rear,max);
    if(s->rear==max-1)
      {
	 printf("under flow\n");
      }
     else
      {
	 s->rear=s->rear+1;
	 s->item[s->rear]=element;
	  printf("the item pushed\n");
      }
    if(s->front==-1)
      {
	 s->front=0;
      }
 }
 int delet(stk *s)
   {
    int p;
    if(s->front==max)

     {
	 return -1;
     }

       printf("%d%d\n",s->front,max);
       p=s->item[s->front];
       s->front=s->front+1;
       return p;
      }

