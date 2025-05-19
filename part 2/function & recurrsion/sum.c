//take 4 parameters and return sum
#include<stdio.h>
int sum(int a,int b,int c, int d)
{
	printf("\nSum of all 4 numbers is %d",a+b+c+d);
}
int main()
{
	sum(1,2,3,4);
	sum(100,100,100,100);
	sum(1,2,3,0);
}
