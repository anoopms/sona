#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
#define ture 1
#define false 0
typedef struct stack
{
int top;
int item[max];
}
stk;
void creates(stk*);
void push(stk *,int);
int pop(stk *);
void infixtopostfix(stk *,char*,char*);
int opers(char);
int pp(char);
void main()
{
int value;
char infix[max]={0};
char postfix[max]={0};
stk s;
clrscr();
creates(&s);
do{
    printf("eter the infix\n");
    scanf("%s",&infix);
    infixtopostfix(&s,infix,postfix);
    printf("the postfix%s\n",postfix);
  }while(infix[0]!='-');
}
void creates(stk *s)
  {
    s->top=-1;
  }
void infixtopostfix(stk *s,char *in,char *po)
   {
     int i,j=0,popped,stacks,pos;
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
	  else if(opers(in[i]))
	    {
		stacks=pp(s->item[s->top]);
		pos=pp(in[i]);
		while(stacks>pos)
		  {
		      po[j++]=pop(s);
		      stacks=pp(s->item[s->top]);
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
	 while(s->top!=-1)
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
	 return ture;

	 }
	 return false;
	 }
int pp(char op)
{
    switch(op)
       {
	  case'^':return 3;
	  case'*':
	  case'/':return 2;
	  case'-':
	  case'+':return 1;
      }
	  return 0;
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
	 printf("underflow");
      }
    else
      {
	 p=s->item[s->top];
	 s->top=s->top-1;
      }
	return p;
}





