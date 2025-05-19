//merge sorted arrays
#include<stdio.h>
int main()
{
	int len,temp;
	printf("Enter size of first array:\n");
	scanf("%d",&len);
	int arr1[len];
	printf("\nEnter elements:");
	int i,j;
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int len2;
	printf("\nEnter second array size:");
	scanf("%d",&len2);
	int arr2[len2];
	printf("\nEnter elements of second array:");
	for(i=0;i<len2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int combine[len+len2];
	for(i=0;i<len;i++)
	{
		combine[i]=arr1[i];
	}
	for(i=0;i<len2;i++)
	{
		combine[len+i]=arr2[i];
	}
	printf("\nCombined array is:");
	for(i=0;i<len+len2;i++)
	{
		printf("%d ",combine[i]);
	}
	for(i=0;i<len+len2;i++)
	{
		for(j=0;j< len+len2;j++)
		{
			if(combine[i]>combine[j])
		{
			temp=combine[i];
			combine[i]=combine[j];
			combine[j]=temp;
		}
		}
	}
	printf("\nSorted combined array is:");
	for(i=0;i<len+len2;i++)
	{
		printf("%d ",combine[i]);
	}
}
