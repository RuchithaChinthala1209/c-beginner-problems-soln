//fibanocci series upto a certain number
#include <stdio.h>
void fib(int n)
{
	int n1=0,n2=1,n3,i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
int main()
{
	fib(10);
}
