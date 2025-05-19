// read all the int values in file and print sum of numbers
#include<stdio.h>
int main()
{
	const char name[]="numbers.txt";
	FILE *fp=fopen(name,"r");
	if(fp==NULL)
	{
		printf("Cant find the file\n");
		return 1;
	}
	int temp;
	int sum=0;
	int read;
	while(fscanf(fp,"%d",&temp)==1)
	{
		sum+=temp;
	}
	
	printf("\nSum of digits is %d",sum);
	fclose(fp);
	fp=NULL;
	return 0;
}
