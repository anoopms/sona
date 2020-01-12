#include<stdio.h>
#include<conio.h>
void main()
{
char buff[1000];
FILE *fthree;
fthree=fopen("c:\\sona\\f3.txt","w");
if(fthree==NULL)
{
  printf("not found\n");
}
FILE *fone;
fone=fopen("c:\\sona\\f1.txt","r");
if(fone==NULL)
{
   printf("not found\n");
}
  while( fgets(buff,1000,fone)!=NULL)
  {
     fputs(buff,fthree);
   }
FILE * ftwo;
ftwo=fopen("c:\\sona\\f2.txt","r");
if(ftwo==NULL)
{
  printf("not found\n");
}
  while(fgets(buff,1000,ftwo)!=NULL)
  {
    fputs(buff,fthree);
    }
  fclose(fone);
  fclose(ftwo);
  fclose(fthree);
  getch();
  }