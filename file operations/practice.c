#include<stdio.h>
int main()
{
	FILE *fp;
	char text[100];
	fp=fopen("application.txt","a");
	//fgets(text,sizeof(text),fp);

	printf("\n %s",text);
	if(fp==NULL)
	{
		printf("Cant open the file");
		return 1;
	}
		fprintf(fp,"This is the new text i am adding");

	int result=fclose(fp);
	if(result==0)fp=NULL;
	else
	{
		printf("File not closed properly");
	}
	return 0;
}
