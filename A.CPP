#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 3
# define ture 1
# define flase 0
typedef struct stack
{
int top;
int item[max];
}stk;
void  createstack(stk*);
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
   printf("3.exit\n");
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
		if(value==-1)
		{
		printf("not valid");
		}
		else
		{
		printf("the item%d",value);
		}
		getch();
		break;
	  case 3:exit(0);
		 break;
	 }
   }
       while(ture);
   }
   void createstack(stk *s)
   {
   s->top=-1;
   }
void push(stk *s,int element)
{  printf("%d%d\n",s->top,max);
   if(s->top==max-1)
   {
   printf("overflow\n");

   }
   else
   {
   s->top=s->top+1;
   s->item[s->top]=element;
   printf("the item is added");
   }
}
int pop(stk *s)
{
   int p;
    p=s->item[s->top];
    s->top=s->top-1;
    return p;

}


