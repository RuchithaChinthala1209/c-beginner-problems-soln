//using do while ask user to enter a positive number until they do
#include<stdio.h>
int main()
{
	int num;
	printf("Welcome ");
	do
	{
		printf("\nEnter a positive number:");
		scanf("%d",&num);
	}
	while(num<=0);
	printf("You entered a positive number %d",num);
}
