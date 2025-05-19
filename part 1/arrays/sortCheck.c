//check if an array is sorted or not
#include<stdio.h>
int main()
{
	int size;
	printf("\nENter size:");
	scanf("%d",&size);
	int arr[size];
	int i,j;
	printf("Enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int isSorted=1;
	for(i=0;i<size-1;i++)
	{
	if(arr[i]>arr[i+1])
	{
		isSorted=0;
		break;
	}
	}
	if(isSorted)
	{
		printf("It is sorted in ascending order\n");
	}
	else
	{
		printf("It is not sorted in ascending order\n");
	}
	return 0;
}
