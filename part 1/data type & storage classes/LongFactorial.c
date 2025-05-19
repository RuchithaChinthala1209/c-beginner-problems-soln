//using long or long long calculate the factorial of 20 using fun
#include<stdio.h>
long long fact(int);
int main()
{
	 int num;
	 printf("\nEnter number:");
	 scanf("%d",&num);
	 long result=fact(num);
	 printf("\nFactorial of %d is %lld",num,result);
}
long long fact(int num)
{
	if(num<=1)
	{
		return 1;
	}
	return num*fact(num-1);
}
