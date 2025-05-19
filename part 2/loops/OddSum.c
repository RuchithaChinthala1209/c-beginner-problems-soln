//cal sum of odd numbers from 1 to specified n
#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			count+=i;
		}
	}
	printf("Sum of odd numbers upto %d is %d",num,count);
}
