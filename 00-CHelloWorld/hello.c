#include<stdio.h>
int main()
{	
	FILE *hello = fopen("output.txt","w");

	fprintf(hello,"Hello, world!");
	fclose(hello);
	return 0;		
}
