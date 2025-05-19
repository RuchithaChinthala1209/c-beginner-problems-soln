//Fibanocci series upto a specified sequence
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,n,i;
	printf("Enter end number:");
	scanf("%d",&n);
//	printf("\n%d",n1);
//	printf("%d\n",n2);
	while(n3<n)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("\n%d",n3);
	}
}
