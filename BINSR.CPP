#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,item,temp,mid,end,beg;
clrscr();
printf("enther no of element");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
  }
  printf("the array");
  for(i=0;i<n;i++)
   {
     printf("\n%d",a[i]);
  }
  printf("the searched item");
  scanf("%d",&item);
  beg=0;
  end=n-1;
  mid=beg+end/2;

while(a[mid]!=item &&beg<end)
{
if(a[mid]<item)
beg=mid+1;
else
end=mid-1;
mid=beg+end/2;
}
if(a[mid]==item)
printf("the item");


printf(" %d",mid);

 getch();
 }