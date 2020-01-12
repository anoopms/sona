#include<stdio.h>
#include<conio.h>
void myfunction();
void myfunction2(int a,int b);
int main()
   {   int a=20;
       int b=10;
       clrscr();
       myfunction();
       myfunction();
       myfunction2(a,b);
       myfunction2(a,111);
       myfunction2(b,222);
       getch();
    }
void myfunction()
   {
     printf("hello world");
   }
void myfunction2(int a,int b)
   {
     printf("hello world %d%d\n",a,b);
    }