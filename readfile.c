#include <stdio.h>

int main()
{
    char buff[1000];
    char *ret;
	FILE *fp;
    
    fp = fopen("/Users/anos2/learn/sona/sample.txt", "r");

    if(fp == NULL)
    {
        printf("Cant open file");
        return 0;
    }

    while(fgets(buff, 1000, fp) != NULL)
    {
        printf(buff);
    }
    fclose(fp);
    return 0;
}
