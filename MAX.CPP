#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,m,n,j,t;
clrscr();
printf("enter the no of rows and coloums");
scanf("%d%d",&m,&n);
printf("the elents");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("the array is");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d",a[i][j]);
}
getch();
}
