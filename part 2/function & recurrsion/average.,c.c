//function that take 5 numbers and print their average
#include<stdio.h>
int avg(int a ,int b, int c, int d, int e)
{
	printf("Average is %d\n",(a+b+c+d+e)/5);
}
int main()
{
	avg(1,2,3,4,5);
	avg(1,1,1,1,1);
}
