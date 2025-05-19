// change value of integer through pointer
#include<stdio.h>
int main()
{
	int num=7;
	int *ptr=&num;
	printf("number before changing %d\n",num);
	*ptr=25;
	printf("\nnumber after changing %d",num);
}
