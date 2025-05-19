//take a number and determine whethere it is +ve,-ve,0
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	if(num==0)
	{
		printf("It is zero");
	}
	else if(num<0)
	{
		printf("It is Negative number");
	}
	else
	{
		printf("It is Positive number");
	}
}
