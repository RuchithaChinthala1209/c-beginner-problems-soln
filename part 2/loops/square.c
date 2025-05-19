//print squares of number util user gives -ve num
#include<stdio.h>
int main()
{
	int num;
	while(1)
	{
		printf("Enter number:\n");
		scanf("%d",&num);
		if(num<0)break;
		printf("%d\n",num*num);
	}
}
