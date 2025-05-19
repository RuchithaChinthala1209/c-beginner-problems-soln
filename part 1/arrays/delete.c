// delete a specific number and display updated array
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int del;
	printf("Enter element to delete:");
	scanf("%d",&del);
	int i,j=0;
	int arr1[5];
	for(i=0;i<5;i++)
	{
		if(arr[i]!=del) 
		{
			arr1[j++]=arr[i];
		}
	}
	printf("\n");
	printf("\nNew array is:");
	for(i=0;i<j;i++)
	{
		printf("%d",arr1[i]);
		
	}
}
