#include<stdio.h>
#include<stdlib.h>
#define max 5
#define true 1
#define false 0
typedef struct stack
	{
	int item[max];
	int rear;
	int front;
	
}stk;
void creates(stk *);
void push(stk *,int);
int pop(stk *);
void printstack(stk *);
int main()
{
	int value;
	int choice;
	stk s;
	creates(&s);
	//stk s;

do
	{
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.exit\n");
	printf("4.print\n");
	printf("enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:printf("enter the element\n");
		   scanf("%d",&value);
	       push(&s,value);
	       break;
	case 2:value=pop(&s);
	       if(value==0)
	         {
		         printf("undeflow\n");
	          }
	     else
		   {
		      printf("the value is%d\n",value);
	        }
	          break;
	case 3:exit(0);
	        break;
	case 4:printstack(&s);
			break;
	}
		
	} while(true);
}

void  creates(stk *s)
{
	s->rear=-1;
	s->front=-1;
}
void push(stk *s,int element)
{
	if((s->rear==max&&s->front==0)||(s->rear+1==s->front))
	{
		printf("overflow");
	}
	else
	{
	s->rear=s->rear+1;
	s->item[s->rear]=element;
	printf("inserted\n");
	}
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
		return (0);
	}
	else{
		p=s->item[s->front];
		s->item[s->front]=0;
		if(s->rear=s->front)
		{
			s->rear=s->front=-1;
		}
		if(s->front==max)
		{
			s->front=0;
		}
		
		else{
		s->front=s->front-1;
		}
		return p;
	}
}
void printstack(stk *s)
{
	int i;
	printf("the array is\n");
	{
		for(i=0;i<max;i++)
		{
			printf("%d",s->item[i]);
		
		}printf("\n");
	};
}
