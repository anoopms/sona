#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#define true 1
#define false 0
typedef struct stack
{
int top;
int item[max];
}stk;
void creates(stk*);
void push(stk*,int);
int pop(stk *);
int evl(stk *,char *);
int opers(char);
int calculate(int,int,char );
void main()
{
clrscr();
int result=0;
stk s;
char postfix[max]={0};

 printf("enter the postfix\n");
 scanf("%s",&postfix);
 result=evl(&s,postfix);
 printf("%d",result);
 getch();
}
void creates(stk *s)
 {
    s->top=-1;
  }
int evl(stk * s,char * postfix)
  {
    int i;
    char r,r1,r2;
    for(i=0;i<strlen(postfix);i++)
      {
	 if(postfix[i]==' '||postfix[i]=='\t'||postfix[i]==',')
	     {
		continue ;
	     }
	 if(opers(postfix[i]))
	     {
		 r1=pop(s);
		 r2=pop(s);
		 //printf("enter the value");
		 //scanf("%d%d",&r1,&r2);
		 r=calculate(r1,r2,postfix[i]);
		 push(s,r);
	     }
	 else
	     {

		 push(s,postfix[i]);
	     }}
	     return s->item[0];
	     }
int opers(char opp)
   {
      switch(opp)
	{
	      case '^':
	      case '%' :
	      case '*'  :
	      case '/':
	      case'+':
	      case'-':
		      return true;
	 }
		     return false;

   }
int calculate(int r1,int r2,char  opraters)
{
   int res=0;
       switch(opraters)
	  {
	      case'+':res=r1+r2;
			break;
	      case'-' :res=r1-r2;
			 break;
	      case'*':res=r1*r2;
			 break;
	      case'/':res=r1/r2;
			break;

       }
		   return res;
    }
void push(stk*s,int element)
{
     if(s->top==max-1)
	{
	    printf("overflow");
	}
      else
	{      s->top=s->top+1;
	       s->item[s->top]=element;

	}
}
int pop(stk*s)
{
   int p;
   if(s->top==-1)
       {
	  printf("overflow");
       }
    else
       {
	   p=s->item[s->top];
	   s->top=s->top-1;
       }
	  return p;
}
