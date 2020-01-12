#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
#define true 1
#define false 0
typedef struct cir
{
  int front;
  int rear;
  int item[max];
}stk;
void createqueue(stk*);
void insert(stk *,int);
int delet (stk *);
void printstack(stk *);
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
     printf("4.print stack\n");
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

	  case 4:printstack(&s);
		 getch();
		 break;
	 }
}while (true);
}
 void createqueue(stk *s)
   {
      s->rear=-1;
      s->front=-1;
   }
 void insert(stk *s,int element)
  {
     printf("%d%d\n",s->rear,max);
    if((s->rear==max-1 && s->front==0)||(s->rear+1==s->front))
      {
	 printf("over flow\n");
	 return;
       }
     if(s->rear==max-1)
      {
	s->rear=-1;
      }


       s->rear=s->rear+1;
       s->item[s->rear]=element;
       printf("the item pushed\n");



  if(s->front=-1)
    {
       s->front=0;
    }
    }
  int delet(stk *s)
    {

      int p;
      printf("%d %d\n",s->rear,s->front);
      if(s->front==-1)
      {
	return -1;
      }
      p=s->item[s->front];
      s->item[s->front]=0;
      s->front=s->front+1;

      printf("%d%d\n",s->front,max);

     if(s->front==s->rear)
	{
	  s->front=s->rear=-1 ;

	}
    else if(s->front==max)
       {
	  s->front=0;
       }


	  return p;
      }

void printstack (stk *s)
  {
   int i;
   for(i=0;i<max;i++)
     {
	printf("%d ",s->item[i]);
     }
     printf("\n");
  }