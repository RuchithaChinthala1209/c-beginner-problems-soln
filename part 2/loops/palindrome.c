//check given number is palindrome or not
#include<stdio.h>
int main()
{
	int num,reverse=0;
	printf("Enter number:");
	scanf("%d",&num);
	int xerox=num;
	while(xerox>0)
	{
		reverse=(reverse*10)+(xerox%10);
		xerox/=10;
	}
	if(reverse==num)
	{
		printf("%d is palindrome",num);
	}
	else
	{
		printf("%d is not a palindrome",num);
	}
}
