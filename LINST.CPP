#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef struct _node
{
  struct _node *next;
  int value;
}node;

void push(int value);
void pop();
node * creates(int value);
void display();
node * strat=NULL;

void main()
{
 int choice;
 int value;
 do
 {
 clrscr();
 printf("1.push\n");
 printf("2.pop\n");
 printf("3.display\n");
 printf("exit\n");
 printf("enter the choice\n" );
 scanf("%d",&choice);
 switch(choice)
 {
   case 1:
	   printf("enter the element\n");
	   scanf("%d",&value);
	   push(value);
	   getch();
	   break;
   case 2:
	   pop();
	   getch();
	   break;
   case 3:
	   display();
	   getch();
	   break;
   case 4:exit(0);
   }
   }while(true);
   }
 node *create(int value)
 {
   node * newnode;
   newnode=(node*)malloc(sizeof(node));
   if(newnode==NULL)
   {
   printf("no memory\n");
   return 0;
   }
   newnode->value=value;
   newnode->next=NULL;
   //strat=newnode;
   return newnode;
   }

  void display( )
  {
    node * temp;
    if(strat==NULL)
    {
      printf("node not created\n");
     }
     temp=strat;
     while(temp!=NULL)
     {
     printf("%d",temp->value);
     temp=temp->next;
     }
  }
  void push(int value)
  {
  node *temp;
  node *npr;
  //temp=strat;
  npr=create (value);
  if(strat==NULL)
  {
    strat=npr;
  }
  else
  {
  temp=strat;
  while(temp->next!=NULL)
  {
    temp=temp->next;
   }
   temp->next=npr;

   //cnpr->next=NULL;
   }
   printf("inswerted\n");
   }
   void pop()
   {
   node *temp;
   node *save;
   if(strat==NULL)
   {
      printf("have one node\n");
      return ;
    }
    temp=strat;
    if(temp->next==NULL)
    {
      strat=NULL;
      printf("the deleted item %d",temp->value);
      free(temp);
     }
     else
     {
	while(temp->next!=NULL)
	{
	   save=temp;
	   temp=temp->next;
	 }
	 save->next=NULL;
	 printf("the deleted item %d",temp->value);
	 free(temp);
       }
    }
