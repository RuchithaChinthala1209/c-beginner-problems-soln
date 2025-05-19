//print only even numbers upto user given number
#include<stdio.h>
int main()
{
	int max,i;
	printf("Enter max number:");
	scanf("%d",&max);
	for(i=0;i<=max;i++)
	{
		if(i%2==1)continue;
		printf("%d ",i);
	}
	
}
