#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ture 1
void push();
void pop();
void main()
{
int choice;
do
{
    clrscr();
    printf("\n....menu....");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.exit\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
	    printf("choice1\n");
	    push();
	    break;
    case 2:
	    printf("choice2\n");
	    pop();
	    break;
    case 3:
	    printf("choice 3\n");
	    exit(0);
	    break;
	    }
	    getch();
	  }  while(ture);
	    }
  void push()
  {
       printf("push\n");
   }
   void pop()
   {
       printf("pop\n");
     }