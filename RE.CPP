#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#define true 1
#define false 0
typedef struct  stack
{
int top;
int item[max];
}
stk;
void push(stk*,char);
int pop (stk *);
void rvers(stk *,char*,char*);
void creates(stk *);
void main()
{
char strin[max];
char rest[max];
stk s;
creates(&s);
clrscr();
do
{
       printf("enter the string\n");
       scanf("%s",&strin);
       rvers(&s,strin,rest);
       printf("result is%s",rest);
       getch();
       break;
       }while(strin[0]!='-');
       }
void creates(stk *s)
{
   s->top=-1;
}
void rvers(stk *s,char *in,char * po)
{
     int i,popped,j=0;
     for(i=0;i<strlen(in);i++)
       {
	  //if(in[i]==' '||in[i]=='\t'||in[i]==',')
	    // {
	      //	 continue;
	      //}
	   //else
	     // {
		push(s,in[i]);
	       //}
	      // push(s,'\0');
     }
      for(i=s->top;i>-1;i--)
	   {
	       //if(in[i]==' '||in[i]=='\t'||in[i]==',')
		 //{
		   // continue;
	    //	 }
	      // else
		// {
		     popped=pop(s);
		     po[j++]=popped ;

	    }
//   }
   po[j]='\0';
   }
void push(stk *s,char element)
{
    if(s->top==max-1)
       {
	      printf("underfow\n");
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
     p=s->item[s->top];
     s->top=s->top-1;
     return p;
}