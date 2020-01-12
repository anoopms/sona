

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 3
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
void printstack(stk *);
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
printf("4.print\n");
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
       if(value==-1)
       {
       printf("underflow");
       }
       else
       {
       printf("the value is%d",value);
       }
       getch();
       break;
case 3:exit(0);
       break;
case 4:printstack(&s);
getch();
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
printf("%d%d\n",s->rear,max);
if((s->rear==max-1&&s->front==0)||(s->rear+1==s->front))
{
printf("overflow\n");
}
if(s->rear==max-1)
{
s->rear=-1;
}
else
{
s->rear=s->rear+1;
s->item[s->rear]=element;
//s->rear=s->rear+1;
printf("the item stored\n");
}
if(s->front==-1)
{
s->front=0;
}

}
int pop(stk *s)
{
int p;
//printf("%d%d",s->rear,max);
if(s->front==-1)
{
return -1;
}


printf("%d%d",s->front,max);
p=s->item[s->front];
s->item[s->front]=1;

if(s->front==s->rear)
{
s->front=s->rear=-1;

}
else if(s->front==max-1)
{
s->front=0;

}
else
{
s->front=s->front+1;
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