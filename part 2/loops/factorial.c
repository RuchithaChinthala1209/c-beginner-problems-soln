//calculate factorial of given number 
#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	if(n<0)
	{
		printf("Factorial not exst for negative numbers");
	}
	else if(n==0)
	{
		printf("Factorial is 1");
	}
	else if(n==1)
	{
		printf("Factorial is 1");
	}
	else
	{
		for(i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	}
	printf("\nfactorial of number is:%d in function",fact);
}
int main()
{
	int num,i,fact=1;
	printf("Enter number:");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Factorial is 1");
	}
	else if(num<0)
	{
		printf("Factorial is not possible for -ve numbers");
	}
	else if(num==1)
	{
		printf("Factorial is 1");
	}
	else
	{
	for(i=2;i<=num;i++)
	{
		fact=fact*i;
	}
}
	printf("factorial of number is:%d",fact);
	factorial(2);
	
}
