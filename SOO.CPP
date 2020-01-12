
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],j,i,n,item,temp;
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
printf("the sorted arry");
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
	 {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	  }
    }

 }
       for(i=0;i<n;i++)
     printf("\n%d",a[i]);

 getch();
}
