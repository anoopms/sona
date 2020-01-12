#include<stdio.h>
#include<conio.h>
void main()
{
  char buff[1000];
  FILE *fp;
  clrscr();
  fp=fopen("c:\\sona\\myfile.txt","r");
  if(fp==NULL)
  {
    printf("Cannot open is file\n");
    return;
  }
  while(fgets(buff,1000,fp)!=NULL)
  {
     printf(buff);
  }
  fclose(fp);
  getch();
}
