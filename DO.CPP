#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 2
#define ture 1
#define false 0
typedef struct stack
{
int rear;
int front;
int item[max];
}stk;
void creates (stk *);
void insert (stk *,int);
int deletes (stk *);
void printst(stk*);
void main()
{
int choice;
int value;
stk s;
creates (&s);
do
{
    clrscr();
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.print\n");
    printf("4.exit\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
      {
	  case 1: printf("enter the element\n");
		  scanf("%d",&value);
		  insert(&s,value);
		  getch();
		  break;
	 case 2:
		value=deletes(&s);
	       if(value==0)
		{
		  printf("underflow\n") ;
		}
		else
		{
		  printf("the value is%d",value);
		}
		getch();
		break;
	 case 3:
		printst(&s);
		getch();
		break;
       case 4:
		exit(0);
		getch();
		break;
	}
	}while(ture);
	}
void creates (stk *s)
  {
    s->rear=-1;
    s->front=-1;
   }
void insert(stk *s,int element)
  {
     printf("%d%d",s->rear,max);
     if((s->rear==max-1 &&s->front==0)||(s->rear+1==s->front))
       {
	 printf("overflow\n");
	 return ;
       }
     if(s->rear==max-1)
       {
	 s->rear=-1;
       }


	 s->rear=s->rear+1;
	 s->item[s->rear]=element;
	 printf("insered\n");

    if(s->front==-1)
       {
	  s->front=0;
       }}
int deletes(stk *s)
{
  int p;
   if(s->front==-1)
     {
	 return 0;
     }
       printf("%d%d",s->front,max);
       p=s->item[s->front];
       s->item[s->front]=0;
      if(s->rear==s->front)
	 {
	    s->rear=s->front=-1;
	 }
     else if(s->front==max)
	{
	    s->front=0;
	}
    else
       {
	  s->front=s->front+1;
       }

	 return p;
      }
void printst(stk *s)
{
   int i;
   for(i=0;i<max;i++)
     {
	printf("%d ",s->item[i]);
     }
	printf("\n");
}








