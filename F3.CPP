#include<stdio.h>
#include<conio.h>
void main()
{
  char buff[1000];
  char s[100];
  char a[100];
  FILE *fthree;
  clrscr();
  fthree=fopen("c:\\sona\\t3.txt","w");
  if(fthree==NULL)
    {
       printf("not found");
    }
  FILE *fone;
  fone=fopen("c:\\sona\\t1.txt","w");
  if(fone==NULL)
  {
      printf("not found");
  }
  FILE *foneR=fopen("c:\\sona\\t1.txt","r");
  if(foneR==NULL)
  {
      printf("not found");
  }
  printf("frist name\n");
  scanf("%s",s);
  fprintf(fone,"first name %s\n",s);
  rewind(fone);
  while(fgets(buff,1000,foneR)!=NULL)
  {
      printf("huhu");
      fputs(buff,fthree);
  }
  FILE *ftwo;
  ftwo=fopen("c:\\sona\\t2.txt","w");
  if(ftwo==NULL)
   {
       printf("not found");
   }
      printf("second name\n");
      scanf("%s",a);
      fprintf(ftwo,"second name %s\n",a);
      while(fgets(buff,1000,ftwo)!=NULL)
	{
	   fputs(buff,fthree);
	}
   fclose(fone);
   fclose(ftwo);
   fclose(fthree);
   getch();
 }


