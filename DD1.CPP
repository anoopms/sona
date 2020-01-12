#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int main()
{
int res;
res=add(40,50);
printf("rwesult%d",res);
getch();
}
int add(int a,int b)
{
return a+b;
}