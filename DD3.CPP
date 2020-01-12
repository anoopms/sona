#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define true 1
#define max 100
#define flase 0

typedef struct stack
{
int item[max];
int top;
}stk;
void create (stk*);
void push(stk*,int);
int pop(stk*);
int full(stk*);
int empty (stk*);
void main()
{
int choice;
int value;
stk s;
do
{
clrscr();
printf("\n....menu...\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.exit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("enter the insert elemts");
	scanf("%d",&value);
	push(&s,value);
	getch();
	break;
case 2:
	value=pop(&s);
	if(value==0)
	printf("not valid");
	else
	printf("tha item is%d\n",value);
	getch();
	break;
case 3:
       exit(0);
       break;
       }


}while(true);

}
   void create(stk * s)
   {
   s->top=-1;
   }
 void push(stk * s,int element)
 {
 if(full(s))
 {
printf("overfloe");
 }
 s->top++;
 s->top=element;
 printf(" the iten is pushed");
 }
 int pop(stk * s)
 {
 int p;

 if(empty(s))
 {

  return 0;

 }
  p=s->top;
  s->top--;
  return p;
  }
int full(stk *s)
{
if(s->top==max-1)
return true;
else
return flase;
}
int empty(stk *s)
{
if(s->top==-1)
return true;
else
return flase;
}

