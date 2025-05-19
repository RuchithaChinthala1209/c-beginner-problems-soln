//minimum of two numbers through ternary operator
#include<stdio.h>
int main()
{
	/*int n1,n2;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	int ans=(n1<n2)?n1:n2;
	printf("Minimum number is %d",ans);*/
	//even odd using ternary
/*	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int ans=(n%2==0)?"even":"odd";
	printf(ans);*/
	//absolute value
/*	int n;
	printf("Enter number:");
	scanf("%d",&n);
	n>0?printf("Absolute value is %d",n):printf("Absolute value is %d",n-(2*n));
*/


//grades on marks>80 high >50 and <80 medium 
int marks;
printf("Enter marks:");
scanf("%d",&marks);
marks>=80?printf("High"):(marks>=50 && marks<80? printf("medium"):printf("low"));
}
