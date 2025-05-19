//sum of elements and avg in a 2d array
#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter row size:");
	scanf("%d",&row);
	printf("\nEnter columun size:");
	scanf("%d",&col);
	int arr[row][col];
	printf("\nEnter elements:");
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum+=arr[i][j];
		}
	}
	printf("\nsum of matrix elements is %d",sum);
	printf("\nAverage of matrix is %d",sum/(row*col));
}
