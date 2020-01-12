#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 100
#define false 0
#define ture 1
#include<string.h>
typedef struct stack
{
int top;
int item[max];
}stk;
void createsk(stk *);
void push(stk *,int);
int pop(stk *);
void infi(stk *,char *,char *);
int inoperator(char);
int precedence(char) ;
int operevaluate(int ,int,char);
int evaluate(stk *s,char * postfix);
void main()
{
char infix[max]={0};
char postfix[max]={0};
stk s;
int final=0;
createsk(&s);
do
  {  printf("enter the infix\n");
     scanf("%s",&infix);
     infi(&s,infix,postfix);
     printf("postfix%s\n",postfix);
     final=evaluate(&s,postfix);
     printf("final=%d\n",final);
  } while(infix[0] !='-');


}
int evaluate(stk*s,char *postfix)
{
    char op1,op2,res;
    int i,intoper;
    char oprand[2];
    createsk(s);
    for(i=0;i<strlen(postfix);i++)
    {
	if(inoperator(postfix[i]))
	{
	op1=pop(s);
	op2=pop(s);
	res=operevaluate(op1,op2,postfix[i]);
	push(s,res);
	}
	 else
	 {
	   oprand[0]=postfix[i];
	   oprand[1]='\0';
	   intoper=atoi(oprand);
	   push(s,intoper);
	   }
	   }
	   return s->item[0];
	   }
int operevaluate(int op1,int op2,char operators)
{
     int a,b,res=0;
     switch(operators)
     {
	case'+':
		 res=op1+op2;
		 break;
	 case'-':res=op1-op2;
		  break;
	 case'*':res=op1*op2;
		  break;
	  case'/':res=op1/op2;
		    break;
	 }
	 return res;
    }
void createsk(stk *s)
{
s->top=-1;
}
void infi(stk *s,char *in,char * po)
   {
      int i,j=0,popped,prestack,preop;
      for(i=0;i<strlen(in);i++)
	{
	   if(in[i]==' '||in[i]=='\t'||in[i]==',')
		{

		   continue;
	       }
	  if(in[i]=='(')
		{
		    push(s,in[i]);
		}
	 else if(inoperator(in[i]))
	       {
		   prestack=precedence(s->item[s->top]);
		   preop=precedence(in[i]);
		   while(prestack>=preop)
		    {
		      po[j++]=pop(s);
		      prestack=precedence(s->item[s->top]);
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

	     } }
	     while(s->top!=-1)
	     {po[j++]=pop(s);
	     }
	    po[j]='\0';

}

int inoperator(char op)
  {
    switch(op)
     {
       case'^':
       case'+':
       case'-' :
       case'/':
       case'*':
       return ture;
     }
       return false;
  }
int precedence(char op)
  {
    switch(op)
      {
	 case'^':
		 return 3;
	 case'/':
	 case'*':
		 return 2;
	 case'+':
	 case'-':
		 return 1;
      }
	return 0;
  }
void push(stk *s,int element)
  {
    if(s->top==max-1)
     {
	printf("overfiow");
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
       printf("undeflow");
     }
   else
     {
	p=s->item[s->top];
	s->top=s->top-1;
     }
  return p;
  }
