//multiplication of a table
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter number to print multiplication:");
	scanf("%d",&num);
	for(i=1;i<11;i++)
	{
		printf("\n%d x %d = %d",num,i,num*i);
	}
}
