//calculate sum of digits
#include<stdio.h>
int main()
{
	int num;
	int reverse=0;
	printf("Enter number:");
	scanf("%d",&num);
	while(num>0)
	{
		reverse=(reverse*10)+(num%10);
		num=num/10;
	}
	printf("Reverse of number is %d",reverse);
}
