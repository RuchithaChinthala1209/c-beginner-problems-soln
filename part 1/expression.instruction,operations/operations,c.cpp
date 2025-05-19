//calculate arthimetic operations of 2 numbers
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter 2 integer numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\nSum of %d and %d is %d",n1,n2,n1+n2);
	printf("\nSubtraction of %d and %d is %d",n1,n2,n1-n2);
	printf("\nProduct of %d and %d is %d",n1,n2,n1*n2);
	printf("\nDivision of %d and %d is %d",n1,n2,n1/n2);
	printf("\nRemainder of dividing %d and %d is %d",n1,n2,n1%n2);
}
