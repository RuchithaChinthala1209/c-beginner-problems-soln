//lcm of two numbers
#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,i;
	printf("Enter 2 numbers:");
	scanf("%d%d",&n1,&n2);
	int min=n1<n2?n1:n2;
	int max=n1*n2;
	for(i=1;i<=max;i++)
	{
		if(i%n1==0 && i%n2==0)
		{
			printf("LCM of %d and %d is %d",n1,n2,i);
			break;
		}
	}
}
