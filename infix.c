#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#define true 1
#define false 0
typedef struct stack{
	int item[max];
	int top;
}stk;
void creates(stk *);
void push(stk *,int);
int pop(stk *);
void intopost(stk *,char *,char *);
int opers(char);
int pp(char);
int main()
{
	stk s;
	char infix[max]={0};
	char postfix[max]={0};
	do
	{
		printf("enter the infix\n");
		scanf("%s",infix);
		intopost(&s,infix,postfix);
		printf("postfix%s\n",postfix);
		
	
    }while(infix[0]!='-');
	return 0;
}
void creates(stk *s)
{
	s->top=-1;
}

void intopost(stk *s,char *in,char* po)
{
	int i,j=0,str,ss,popped;
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
		else if(opers(in[i]))
		{
			str=pp(s->item[s->top]);
			ss=pp(in[i]);
			while(str>ss)
			{
				po[j++]=pop(s);
				str=pp(s->item[s->top]);

			}
			push(s,in[i]);
		}
		else if(in[i]==')')
		{
			popped=pop(s);
			while(popped!='(')
			{
		        po[j++]=popped;		        popped=pop(s);
			
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
		case '^':
		case '*':
		case'+':
		case'/':
		case'-':return true;
		}
		return false;
	}
	int pp(char op)
	{
		switch(op)
		{
			case '^':return 3;			case '*':			case'/':return 2;			case'+':			case'-':return 1; 
		}
		return 0;
	}
	void push(stk *s,int element)
	{
		s->top=s->top+1;
		s->item[s->top]=element;
		
	}
	int pop(stk * s)
	{
		int p;
		p=s->item[s->top];
		s->top=s->top-1;
		return p;
	}
			
		
	

