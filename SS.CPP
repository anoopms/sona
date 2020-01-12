#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 3
# define ture 1
# define flase 0
typedef struct stack
{
int rear;
int front;
int item[max];
}stk;
void  createstack(stk*);
void prints(stk *);
void push(stk*,int);
int pop(stk*);
//int full(stk*);
//int empty(stk*);
void main()
{
int choice;
int value;
stk s;
createstack(&s);
do
{  clrscr();
   printf("1.push\n");
   printf("2.pop\n");
   printf("3.display\n");
   printf("4.exit\n");
   printf("enter the choice\n");
   scanf("%d",&choice);
   switch(choice)
      {
	 case 1:
		printf("enter the element");
		scanf("%d",&value);
		push(&s,value);
		getch();
		break;
	 case 2:
		value=pop(&s);
		if(value==0)
		{
		printf("not valid");
		}
		else
		{
		printf("the item%d",value);
		}
		getch();
		break;
	 case 3:prints(&s);
		getch();
		break;
	  case 4:exit(0);
		 break;
	 }
   }
       while(ture);
   }
   void createstack(stk *s)
   {
   s->rear=-1;
   s->front=-1;
   }
void push(stk *s,int element)
{  printf("%d%d\n",s->rear,max);
   if(s->rear==max-1&&s->front==0||s->rear+1==s->front)
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
   printf("the item is added");

   if(s->front==-1)
   {
   s->front=0;
   }
}
int pop(stk *s)
{
   int p;
   if(s->front==-1)
   {
   return 0;

   }
    p=s->item[s->front];
    s->item[s->front]=0;

     if(s->rear==s->front)
    {
    s->rear=s->front=-1;
    }
    else if(s->front==max-1)
    {
    s->front=-1;
    }
    else
    {
    s->front=s->front+1;
    }
    return p;
    }
void prints(stk *s)
{
int i;
for(i=0;i<max;i++)
{
printf("%d",s->item[i]);
}
printf("\n");
}




