//sum of diagonal elements in a 2d array
#include<stdio.h>
int main()
{
	int len;
	printf("Enter no of rows and coloumns size:");
	printf(" no of rows and columns should be equal:");
	scanf("%d",&len);
	int arr[len][len];
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int left_dig=0,right_dig=0;
	for(i=0;i<len;i++)
	{
		left_dig+=arr[i][i];
		right_dig+=arr[i][len-1-i];
	}
	printf("\nSum of left diagonal elements is %d",left_dig);
	printf("\nSum of right diagonal elements is %d",right_dig);
	int index=len/2;
	int total_sum=left_dig+right_dig;
	if(len%2!=0)
	{
		total_sum-=arr[index][index];
	}
	printf("\nTotal sum of two diagonals is %d",total_sum);
}
