#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
#define true 1
#define false 0
typedef struct stack
{
int item[max];
int top;
}
stk;
void push(stk *,char);
int pop(stk *);
void creates(stk *);
void connect(stk *,char *,char *,char *);
void main()
{
char string1[max];
char string2[max];
char string3[max];
stk s;
clrscr();
creates(&s);
do
 {
     printf("enter the frist string\n");
     scanf("%s",&string1);
     printf("enter the second string\n");
     scanf("%s",&string2);
     connect (&s,string1,string2,string3);
     printf("%s",string3);
     getch();
     break;
 }
     while(string1[0]!='-');
}
void creates(stk *s)
{
   s->top=-1;
}
void connect(stk *s,char *in,char *ot,char *po)
{
   int i,j,k=0,popped;
   for(i=0;i<strlen(in);i++)
     {
	 push(s,in[i]);
     }
   for(i=0;i<strlen(in);i++)
     {
	popped=pop(s);
	po[k++]=popped;
     }
   for(i=0;i<strlen(ot);i++)
     {
	push(s,ot[i]);
     }
    for(i=0;i<strlen(ot);i++)
     {
	 popped=pop(s);
	 po[k++]=popped;
     }
}
void push(stk *s,char element)

{
   s->top=s->top+1;
   s->item[s->top]=element;
}
int pop(stk *s)
{
char p;
   p=s->item[s->top];
   s->top=s->top+1;
	return p;
}

