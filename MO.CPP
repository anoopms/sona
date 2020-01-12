#include<stdio.h>
#include<conio.h>
void increment (int);
void main()
{

   int a=10;
   clrscr();
   increment(a);
   printf("ont side%d\n",a);
   getch();
}
void increment (int val)
{
  val=val+1;
  printf("value is%d\n",val);
}


