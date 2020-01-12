
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef struct _node
{
  int value;
  struct _node * next;
}node;

node * create(int value);
void insert (int value);
void deletefrist();
void insertend(int value);
void tvs();
node *strat=NULL;
void insertMenu(int choice);
void deleteend();

void main()
{
int choice,choice1;
int item;
do
{  clrscr();

   printf("1.insert\n");
   printf("2.display\n");
   printf("3.delete\n");
   printf("4.deleteend\n");
   printf("5.exit\n");
   printf("enter the choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 printf("1.insert big\n");
	 printf("2.insert end\n");
	 printf("enter the choice\n");
	 scanf("%d",&choice1);
	 insertMenu(choice1);
	break;
	case 2:
	    tvs();
	    getch();
	    break;
	case 3:
	    deletefrist();
	    getch();
	    break;
	case 4:
	     deleteend();
	     getch();
	     break;
	case 5:
	    exit(0);
	    getch();
	    break;

	}
    }while(true);
}

void insertMenu(int choice)
{
    int item;
    switch(choice)
	 {
	     case 1:
		printf("enter the element\n" );
		scanf("%d",&item);
		insert( item);
		getch();
		break;
	     case 2:
		printf("enter the element\n" );
		scanf("%d",&item);
		insertend( item);
		getch();
		break;
	     case 3:
		exit(0);
	}
}

void tvs()
{
   node * m;
   m=strat;
   while(m!=NULL)
   {
       printf("%d ",m->value);
       m=m->next;
   }
   printf("\n");
}
void insert(int value)
{
   node * nptr;
   nptr=create(value);
   nptr->next=strat;
   strat=nptr;
   printf("inserted\n");
}
void insertend(int value)
{
    node  *npr;
    node *temp;

    npr=create(value);
    if(strat==NULL)
    {
	npr->value=value;
	strat=npr;
    }
    temp=strat;
    while(temp->next!=NULL)
    {
	temp=temp->next;
    }
    temp->next=npr;
    printf("inserted\n");
}

node * create(int value)
{
   node * newnode;
   newnode=(node *)malloc(sizeof(node));
   if(newnode==NULL)
   {
       printf("Node cannot be created\n");
       return 0;
   }
   newnode->value=value;
   newnode->next=NULL;
   return newnode;
}
void deletefrist()
{
    node * temp;
    if(strat==NULL)
    {
      printf("underflow\n");
      return;
    }
    temp=strat;
    strat=strat->next;
    printf("deleted %d ",temp->value);
    free(temp);
}
void deleteend()
{
  node *temp;
  node * save;
  if(strat==NULL)
  {
     printf("underflow\n");
     return;
   }
   temp=strat;
   if(temp->next==NULL)
   {
     strat=NULL;
   }
   else
   {
   while(temp->next!=NULL)
   {
      save=temp;
     temp=temp->next;

   }
   }
   save->next=NULL;
   printf("deleted%d",temp->value);
   free(temp);
   }



