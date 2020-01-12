#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 4
#define true 1
#define false 0
typedef struct stack
{
int item[max];
int rear;
int front;
}
stk;
void creates(stk *);
void push(stk *,int);
int pop(stk*);
void dis(stk *);
void main()
{
//clrscr();
int value;
stk s;
creates(&s);

int choice;
do
{
clrscr();
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the element\n");
       scanf("%d",&value);
       push(&s,value);
       getch();
       break;
case 2:value=pop(&s);
	if(value==0)
	{
	printf("not found\n");

	}
	else
	{
	printf("the popoed value is%d",value);
	}
	getch();
	break;
case 3:dis(&s);
       getch();
       break;
case 4:  exit(0);
	 getch();
	break;
	 }
	 }while(true);
	 }
      void creates(stk *s)
      {
      s->rear=-1;
      s->front=-1;
      }
      void push(stk *s,int element)
      {
      if((s->rear==max-1&&s->front==0)||(s->rear+1==s->front))
      {
      printf("overflow\n");
      return;
      }
      if(s->rear==max-1)
      {
      s->rear=-1;
      }
      s->rear=s->rear+1;
      s->item[s->rear]=element;
      printf("insertred\n");

      if(s->front==-1)
      {
      s->front=0;
      }}
      int pop(stk *s)
      {
      int p;
      if(s->front==-1)
      {
      return 0;
      }
      p=s->item[s->front] ;
      s->item[s->front]=0;
      if(s->rear==s->front)
      {
      s->rear=s->front=-1;
      }
      if(s->front== max-1)
      {
      s->front=0;
      }
      else
      {

      s->front=s->front+1;
       }
      return p;

      }
      void dis(stk *s)
      {
      int i;
      for(i=0;i<max;i++)
      {
      printf("%d",s->item[i]);
      }
      printf("\n");
      }
