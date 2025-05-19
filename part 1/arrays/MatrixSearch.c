//Search an element in a 2d array
#include<stdio.h>
int main()
{
	int row,col;
	printf("\nEnter size of row:");
	scanf("%d",&row);
	printf("\nEnter size of column");
	scanf("%d",&col);
	int arr[row][col];
	printf("Enter elements of matrix:");
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEntered matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int find,found=0;
	printf("\nEnter element to search:");
	scanf("%d",&find);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]==find)
			{
				found=1;
			}
		}
	}
	if(found)
	{
		printf("Found element");
	}
	else
	{
		printf("Not found");
	}
}
