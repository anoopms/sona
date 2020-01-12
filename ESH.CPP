#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
int a[10],n,i,item;
clrscr();
printf("enter the number of array");
scanf("%d",&n);
printf("enther the arrqay");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the search number");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
break;
}
if(i==n)
printf("item not found");
else
printf("the searched item is %d",i+1);
}
getch();

