// display max and min values from an array
#include<stdio.h>
int main()
{
	int size,i,j;
	int min,max;
	printf("Enter size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements of size %d\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nMax value is %d",max);
	printf("\nMin value is %d",min);
}
