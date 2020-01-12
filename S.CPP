
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
#define true 1
#define false 0
void main()
{
int n,m,i,j,k;
char a[10],b[5],c[9];
printf("enter no of charcter\n");
scanf("%d",&n);
printf("enter the string");
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
printf("enter the no of character\n");
scanf("%d",&m);
printf("enter the scond string");
for(j=0;j<m;j++)
{
scanf("%c",&a[j]);
}
for(i=0;i<n;i++)
{
for(k=0;k<n;k++)
{
c[k]=a[i];
}
}
for(j=0;j<m;j++)
{
for(k=n;k<m;k++)
{
c[k]=b[j];
}
}
printf("%c",c[k]);



getch();
}


