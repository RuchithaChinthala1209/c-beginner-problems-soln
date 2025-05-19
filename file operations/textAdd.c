// add data to file taken from user in a new line
#include<stdio.h>
int main()
{
	FILE *file=fopen("adding.txt","w");
	if(file==NULL)
	{
		printf("Error while loading the file");
		return 1;
	}
	char input[100];
	while(1)
	{
		fgets(input,100,stdin);
		if(strcmp(input,"exit\n")==0)break;
		fputs(input,file);
	}
	fclose(file);
	file=NULL;
	return 0;
}
