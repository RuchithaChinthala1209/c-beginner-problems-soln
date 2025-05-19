// to check if an array is palindrome or not
#include<stdio.h>
int main()
{
	int len;
	printf("\nEnter size of array:");
	scanf("%d",&len);
	int arr1[len];
	printf("\nEnter elements (No of elements should be %d)",len);
	int i;
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nEntered array is:");
	for(i=0;i<len;i++)
	{
		printf("%d ",arr1[i]);
	}
	int pali=1;
	printf("\nReverse of array is:");
	for(i=len-1;i>=0;i--)
	{
		printf("%d ",arr1[i]);
	}
	for(i=0;i<len/2;i++)
	{
		
			if(arr1[i]!=arr1[len-1-i])
		{
			pali=0;
			break;
		}
		
	}
	if(pali==1)
	{
		printf("\nGiven array is palindrome");
	}
	else
	{
		printf("\nGiven array is not a palindrome");
	}
}
