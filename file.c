#include <stdio.h>

int main()
{
	char arr[1000];
	char *ret;
	
	FILE *fOne = fopen("/Users/anos2/learn/sona/one.txt", "r");
	if(fOne == NULL)
	{
		printf("Cant open file one\n");
		return 0;
	}
	
	FILE *fTwo = fopen("/Users/anos2/learn/sona/two.txt", "r");
	if(fTwo == NULL)	
	{				
		printf("Cant open file two\n");				
		return 0;	
	}
	
	FILE *fThree = fopen("/Users/anos2/learn/sona/three.txt", "w");
	if(fThree == NULL)
	{				
		printf("Cant open file three\n");				
		return 0;	
	}
	
	while(fgets(arr, 1000, fOne) != NULL)
	{
		fputs(arr, fThree);
	}
	
	while(fgets(arr, 1000, fTwo) != NULL)
	{		
		fputs(arr, fThree);
	}
	
	fclose(fOne);
	fclose(fTwo);
	fclose(fThree);
}
