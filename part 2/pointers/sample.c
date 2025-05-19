// print a number from pointer
#include<stdio.h>
int main()
{
	int num=10;
	int *ptr=&num;
	printf("\n%d from *ptr",*ptr);
	printf("\n%d from num",num);
	printf("\n%d adress from ptr",ptr);
	printf("\n%d adress from num",&num);
}
