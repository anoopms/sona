#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#define true 1
#define false 0
typedef struct stack
{
int item[max];
int top;
}stk;
void creates(stk *);
void push(stk *,int);
int pop(stk*);
int pp(char);
int opers(char);
void infixtopostfix(stk *,char *,char *);
void main()
{
char infix[max]={0};
char postfix[max]={0};
stk s;
creates(&s);

do
{
printf("enter the infix\n");
scanf("%s",&infix);
infixtopostfix(&s,infix,postfix);
printf("the postfix\n");
printf("%s",postfix);
getch();
break;
}while (infix[0]!='-');
}
void creates(stk *s)
{
s->top=-1;
}
void infixtopostfix(stk *s,char* in,char* po)
{
int i,j=0,popped,poop,stackop;
for(i=0;i<strlen(in);i++)
{
if(in[i]==' '||in[i]=='\t'||in[i]==',')
{
continue;
}
if (in[i]=='(')
{
push(s,in[i]);
}
else if (opers(in[i]))
{
stackop=pp(s->item[s->top]);
poop=pp(in[i]);
while(stackop>poop)
{
po[j++]=pop(s);
stackop=pp(s->item[s->top]);
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
}
}
while (s->top!=-1)
{
po[j++]=pop(s);
}
po[j]='\0';
}

int opers(char op)
{
switch(op)
{
case'^':
case'*':
case'/':
case'-':
case'+':
	return true;
	}
	return false;
	}
int pp(char op)
{
switch(op)
{
case'^':
	return 3;
case'*':
case'/': return 2;
case'+':
case'-':return 1;
}
return  0;
}
void push(stk *s,int element)
{
if(s->top==max-1)
{
printf("overflow\n");
}
else
{
s->top=s->top+1;
s->item[s->top]=element;
}
}
int pop(stk *s)
{
int p;
if(s->top==-1)
{
printf("underflow\n");
}
else
{
p=s->item[s->top];
s->top=s->top-1;
}
return p;
}



