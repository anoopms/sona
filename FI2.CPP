#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  int s[1000];
  FILE *fp;
  fp=fopen("c:\\sona\\ss.txt","w");
  if(fp==NULL)
  {
  printf("not found");
  return;
  }
  printf("age is\n");
  scanf("%d",age);
  fprintf(fp,"age is%d",age);
  fclose(fp);
  getch();
  }



