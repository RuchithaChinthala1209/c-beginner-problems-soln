/* create void minmax(int *a,int *b,int *min,int *max
that takes 2 intger points *a and *b and return big value to 
*max and small value to *min */
#include<stdio.h>
void minmax(int *a ,int *b, int *min, int *max)
{
	if(*a < *b)
	{
		*min=*a;
		*max=*b;
	}
	else
	{
		*min=*b;
		*min=*a;
	}
}
int main()
{
	int a,b,min,max;
	printf("Enter any 2 value:\n");
	scanf("%d%d",&a,&b);
	minmax(&a,&b,&min,&max);
	printf("Between %d and %d the min value is %d and max is %d",a,b,min,max);
}
