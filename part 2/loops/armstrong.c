//Armstrong number checking
#include<stdio.h>
int main()
{
	int num,digit;
	int cube=0;
	printf("Enter number:");
	scanf("%d",&num);
	int xerox=num;
	while(xerox>0)
	{
		digit=xerox%10;
		cube+=digit*digit*digit;
		xerox/=10;
	}
	if(cube==num)
	{
		printf("%d is armstrong number",num);
	}
	else
	{
		printf("%d is not a armstrong number",num);
	}
	
}
