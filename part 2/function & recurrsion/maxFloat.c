// create a fun take 2 float args and return largest
#include<stdio.h>
float max(float a ,float b)
{
	float ans=(a>b)?a:b;
	printf("\n%.2f is greater",ans);
}
int main()
{
	max(4.5,8.2);
}
