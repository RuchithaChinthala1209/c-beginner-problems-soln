/*swap two numbers using a  variable*/
#include<stdio.h>
int main()
{
	/*int n1,n2;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\nBefore swapping numbers are %d and %d",n1,n2);
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("After swapping numbers are %d and %d",n1,n2);*/
	/*swap two numbers without using a variable*/
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\nBefore swapping numbers are %d and %d",n1,n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("After swapping numbers are %d and %d",n1,n2);
}
