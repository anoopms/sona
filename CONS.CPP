#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef struct _node
{
   struct _node *next;
   int value;
}
node;
typedef struct _list
{
  node * start;
}
list;
node * create(int );
void insertnode(list *,int);
void display(list * );
void con(list *,list *);
void main()
{
   list list1;
   list list2;
   list1.start = NULL;
   list2.start = NULL;

   int value;
   do
   {
     int choice;
     clrscr();
     printf("1.first list insert\n");
     printf("2.second list insert\n");
     printf("3.frist list display\n");
     printf("4.second list display\n");
     printf("5.combined\n");
     printf("6.exit\n");
     printf("enter the choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
	 printf("enter the first list element\n");
	 scanf("%d",&value);
	 insertnode(&list1,value);
	 getch();
	 break;
       case 2:
	 printf("enter the second list lement\n");
	 scanf("%d",&value);
	 insertnode(&list2,value);
	 getch();
	 break;
       case 3:
	 display(&list1);
	 getch();
	 break;
       case 4:
	 display(&list2);
	 getch();
	 break;
       case 5:
	 con(&list1,&list2);
	 getch();
	 break;
       case 6:
	 exit(0);
	 }
	 }while(true);

}
node * create(int value)
{
  node *newnode;
  newnode=(node *)malloc(sizeof(node));
  if(newnode==NULL)
  {
     printf("have no space\n");
     return NULL;
  }
  else
  {
     newnode->value=value;
     newnode->next=NULL;

   }
    return newnode;
}

void insertnode(list *list1,int value)
{
  node *temp;
  node *npr;
  npr=create(value);
  if(list1->start==NULL)
  {
     list1->start=npr;

  }
  else
  {
      temp=list1->start;
      while(temp->next!=NULL)
      {
	  temp=temp->next;
      }
       temp->next=npr;

  }
   printf("inseted\n");
}

void display(list *list1)
{
  node * temp;
  if(list1->start==NULL)
  {
    printf("have no node\n");
    return;
  }
  temp=list1->start;
  while(temp!=NULL)
  {
    printf("%d\n",temp->value);
    temp=temp->next;
  }
}

void con(list *list1,list *list2)
{
   node *temp;
   temp=list1->start;
   while(temp->next!=NULL)
   {
      printf("%d ",temp->value);
      temp=temp->next;
   }
   temp->next=list2->start;
   printf("%d",temp->value);
}
