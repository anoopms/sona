#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
#define true 1
#define false 0
typedef struct stack
{
int item [max];
int top;
}stk;
void creates(stk *);
void push(stk *,int);
int pop(stk *);
void eva(stk*,char*,char*);
int pp(char);
int oper(char);
void main()
{
stk s;

char infix[max]={0};
char postfix[max]={0};
clrscr();
creates(&s);
do
{
printf("enter the infix\n");
scanf("%s",&infix);
eva(&s,infix,postfix);
printf("the pos\tfix%s\n",postfix);
}
while(infix[0]!='-');
}
void creates(stk *s)
{
s->top=-1;
}
void eva(stk *s,char *in,char *po)
{
int j=0,ss,d,popped,i;
for(i=0;i<strlen(in);i++)
{
//int j=0;
//char s,d,popped;
if(in[i]=='\t'||in[i]==' '||in[i]==',')
{
continue;
}
if(in[i]=='(')
{
push(s,in[i]);
}
else if(oper(in[i]))
{
ss=pp(s->item[s->top] );
d=pp(in[i]);
while(ss>d)
{
po[j++]=pop(s);
ss=pp(s->item[s->top]);
}
push(s,in[i]);
}
else if(in[i]==')')
{
popped=pop(s);
while(popped!='(')
{
po[j++]=popped;
popped=pop(s);
}
}
else
{
po[j++]=in[i];
}}
while(s->top!=-1)
{
po[j++]=pop(s);
}
po[j]='\0';
}
int oper(char op)
{
switch(op)
{
case'^':
case'*':
case'+':
case'-':
case'/':return true;
}
return false;
}
int pp(char op)
{
switch(op)
{
case '^':return 3;
case '/':
case '*':return 2;
case'+':
case'-':return 1;
}
return 0;
}
void push(stk *s,int element)
{
s->top=s->top+1;
s->item[s->top]=element ;
}
int pop(stk *s)
{
int p;
p=s->item[s->top];
s->top=s->top-1;
return p;
}


