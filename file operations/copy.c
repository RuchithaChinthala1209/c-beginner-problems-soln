//copy text from file to another file
#include<stdio.h>
int main()
{
	FILE *source_file=fopen("application.txt","r");
	FILE *dest_file=fopen("copy.txt","w");
	if(source_file==NULL || dest_file==NULL)
	{
		printf("Error in loading files");
		return 1;
	}
	while(1)
	{
		char c=fgetc(source_file);
		if(c==EOF)break;
		fputc(c,dest_file);
	}
	return 0;
}
