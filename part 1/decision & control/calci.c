//calci using switch
#include<stdio.h>
#include<math.h>
int main()
{
	int op;
	int n1,n2;
	printf("Enter any two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\nChoose a number to perfom operation:");
	printf("\n1.Addition\n2.Subtraction\n3.multiplication\n4.Dvision\n5.Modulo Division\6.Square\n7.square root");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Addition is %d",n1+n2);
			break;
		case 2:
			printf("Subtraction is %d",n1-n2);
			break;
		case 3:
			printf("Multiplication is %d",n1*n2);
			break;
		case 4:
			printf("Division is %d",n1/n2);
			break;
		case 5:
			printf("Modulo Division is %d",n1%n2);
			break;
		case 6:
			printf("squares of %d and %d is %d, %d",n1,n2,n1*n1,n2*n2);
			break;
		case 7:
			printf("Square root od %d and %d is %f, %f",n1,n2,sqrt(n1),sqrt(n2));
			break;
		default:
			printf("Choose correct option");
	}
}

