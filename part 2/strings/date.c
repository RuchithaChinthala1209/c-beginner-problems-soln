//use format specifiers to print date month year
#include<stdio.h>
#include<string.h>
int main()
{
	int date,year;
	char month[10];
	printf("Enter date:");
	scanf("%d",&date);
	printf("\nEnter month:");
	scanf("%s",month);
	printf("\nENter year:");
	scanf("%d",&year);
	printf("Your date of birth is %d/%s/%d",date,month,year);

}
