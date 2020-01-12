#include<stdio.h>
#include<conio.h>
#include<string.h>
#define true 1
#define false 0
#define max 100
typedef struct stack
{
int item[max];
int top;
}stk;
void createstack(stk *);
void push(stk *,char);
void pop(stk *);
void infixtopostfix(stk*s,char *in,char * po);
int precedence(char);
int isoperator(char);
void main()
{
    char infix[max]={0};
    char postfix[max]={0};
    stk s;
    do
	{
	printf("enter the infix expression\n");
	scanf("%s",&infix);
	infixtopostfix(&s,infix,postfix);
	printf("%s",postfix);
	final=evalate(&s,postfix);
	printf("final=%d\n",final);
	}
     while(infix[0]!='-');
     }
void infixtopostfix(stk *s,char *in,char*po)
{
int i,j,len,prestack,preop;
char popped;
len=strlen(in);
i=j=0;
while(i<len)
{if(in[i]==' '||in[i]=='\t'||in[i]==',')
{
i++;
continue;
}
if(in[i]=='(')
push(s,in[i]);
else if(isoperator(in[i]))
{
prestack=precedence(s->item[s->top]);
preop=precedence(in[i]);
while(prestack>=preop)
{
po[j++]==pop(s);
prestack=precedence(s->item[s->top]);
}
push(s,in[i]);
}
else if(in[i]==')' )
{
while((popped=pop(s))!='(')
{
po[j++]=popped;
}
}
else
po[j++]=in[i];
i++;
}
po[j]='\0';
}
void push(stk *s,char item)
{s->top++;
s->item[s->top]==item;
}
char pop(stk *s)
{
char popped;
popped=s->item[s->top];
s->top--;
return popped;
}
int isoperator(char op)
{
switch(op)
{
case'^':
case'+' :
case'-' :
case'*':
case'/':return 1;
}
return 0;
}
int precedence(char op)
{
switch(op)
{
case'^':return 3;
case'/':
case'*':
case'%':return 2;
case'+':
case'-':return 1;
}
return 0;
}

+