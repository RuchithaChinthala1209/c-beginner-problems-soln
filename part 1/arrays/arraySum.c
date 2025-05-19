//sum and average of all elements in an array
#include<stdio.h>
int main()
{
	int len,i;
	printf("Enter no of elements:");
	scanf("%d",&len);
	int arr[len];
	printf("Enter elements:\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(i=0;i<len;i++)
	{
		sum+=arr[i];
	}
	printf("\nSum of array is %d",sum);
	printf("\naverage of array is %d",(sum/len));
}
