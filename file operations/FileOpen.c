// take filename from user and check whether it exist or not
#include<stdio.h>
int main()
{
	char filename[100];
	printf("Enter file name:");
	//scanf("%99s",filename);
	fgets(filename,sizeof(filename),stdin);
	FILE *fp=fopen(filename,"r");
	if(fp!=NULL)
	{
		printf("\n%s name file exist");
		fclose(fp);
	}
	else
	{
		printf("Such file doesnt exist");
	}
	return 0;
}
