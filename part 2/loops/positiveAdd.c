//add all +ve and ignore -ve num by user
#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("\nIf you want to stop enterning numbers press 0");
	printf("\nEnter numbers:");
	do
	{
		scanf("%d",&num);
		if(num<0)
		{
			continue;
		}
			sum+=num;
	}
	while(num!=0);
	printf("\n%d is sum",sum);
}
