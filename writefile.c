#include <stdio.h>
int main()
{
	char *name = "Anoop";
	int age = 40;
	FILE *fp;
	fp = fopen("/Users/anos2/learn/sona/sample.txt", "r");
	fprintf(fp, "Anoop. Age=%d height=%d", 6, age);
	printf("\n");
	fputs("Anoop. Age=age", fp);
	return 0;
}