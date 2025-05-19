//reverse an array
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	printf("Array elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("Reverse order of array is:\n");
	for(i=9;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
