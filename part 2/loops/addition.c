//add numbers given from user until its 0
#include<stdio.h>
int main()
{
	int num,sum=0;
	do
	{
		printf("Enter numbers:");
		scanf("%d",&num);
		sum+=num;
	}
	while(num!=0);
	printf("Sums of numbers is %d\n",sum);
}
