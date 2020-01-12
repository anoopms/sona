#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,a[10],j,tem,beg,end,mid,item;
printf(" enter the arrya of element");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the array is");
for(i=0;i<n;i++)

printf("%d\n",a[i]);
printf("the sorted array\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
tem=a[i];
a[i]=a[j];
a[j]=tem;
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("enter the seared item");
scanf("%d",&item);
beg=0;
end=n-1;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==item);
{
printf("the item%d",mid);
break;
}
if(a[mid]>item)
end=mid-1;
else
beg=mid+1;

}
getch();
}