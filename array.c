#include<stdio.h>
int main()
{
int n,a[10],i,j,temp,item,big,end,mid;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("the array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("the sorted array is\n");
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
				{
				printf("%d\n",a[i]);
			}
			printf("searched item is\n");
			scanf("%d",&item);
			big=0;
			end=n-1;
			for(i=0;i<n;i++)
			{
				mid=(big+end)/2;
				if(a[mid]==item)
				{
					printf("the item is %d",mid);
					break;
				}
				else if (a[mid]>=item)
				{
					end=mid-1;
				}
				else{
					big=mid+1;
				}
			
			}
	
}
