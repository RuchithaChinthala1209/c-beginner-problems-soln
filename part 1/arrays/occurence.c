//creat a prgrm that counts no of occurences in an array
#include<stdio.h>
int occ(int arr[],int size,int element);
int main()
{
	int arr[10];
	printf("Enter 10 elements:\n");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	int element;
	printf("Enter the number to know no of occurences:\n");
	scanf("%d",&element);
	occ(arr,10,element);
}
int occ(int arr[],int size,int element)
{
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			count++;
		}
	}
	printf("No of occurences of %d is %d",element,count);
}

