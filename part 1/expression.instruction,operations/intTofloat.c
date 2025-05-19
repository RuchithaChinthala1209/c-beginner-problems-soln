//take integer and convert into float
#include<stdio.h>;
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	printf("\nInteger is %d",num);
	float numb=(int)num;
	printf("\nFloating number is %f",numb);
}
