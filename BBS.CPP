#include<stdio.h>
#include<conio.h>
void main()
{
int a[15],j,i,n,item,temp,beg,end,mid;
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
      printf("%d",a[i]);
 printf("\n enter the search item");
 scanf("%d",&item);
  beg=0;
  end=n-1;
  while(beg<=end)
   {
     mid=(beg+end)/2;
     if(a[mid]==item)
       {
	   printf(" the item is %d",mid);
	   break;
       }
     if(a[mid]>item)
	end=mid-1;
     else
       beg=mid+1 ;
 //mid=(beg+end)/2;
  }
  getch();
 }





