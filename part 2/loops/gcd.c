//GCD of two numbers
#include<stdio.h>
int main ()
{
	int n1,n2;
	printf("ENter 2 numbers to cal gcd");
	scanf("%d%d",&n1,&n2);
	int min=n1<n2?n1:n2;
	int i;
	for(i=min;i>=1;i--)
	{
		if(n1%1==0 && n2%i==0)
		{
			printf("gcd(%d,%d)=%d",n1,n2,i);
			break;
		}
	}
}
