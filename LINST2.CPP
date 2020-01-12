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

typedef struct _list
{
  node *start;
}list;

void push(list*, int value);
void pop(list*);
node *creates(int value);
void display(list*);

void main()
{
 int choice;
 int value;

 list list1;

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
	   push(&list1, value);
	   getch();
	   break;
   case 2:
	   pop(&list1);
	   getch();
	   break;
   case 3:
	   display(&list1);
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

  void display(list *mylist)
  {
    node * temp;
    if(mylist->start==NULL)
    {
      printf("node not created\n");
     }
     temp=mylist->start;
     while(temp!=NULL)
     {
     printf("%d",temp->value);
     temp=temp->next;
     }
  }
  void push(list *mylist, int value)
  {
  node *temp;
  node *npr;
  //temp=strat;
  npr=create (value);
  if(mylist->start==NULL)
  {
    mylist->start=npr;
  }
  else
  {
  temp=mylist->start;
  while(temp->next!=NULL)
  {
    temp=temp->next;
   }
   temp->next=npr;

   //cnpr->next=NULL;
   }
   printf("inswerted\n");
   }
   void pop(list *mylist)
   {
   node *temp;
   node *save;
   if(mylist->start==NULL)
   {
      printf("have one node\n");
      return ;
    }
    temp=mylist->start;
    if(temp->next==NULL)
    {
      mylist->start=NULL;
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
