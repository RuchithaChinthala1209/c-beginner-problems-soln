//copy array to new array using pointer arithmetic
#include<stdio.h>
void copy(char *arr,int size, char *new_arr);
void print(char *arr,int size);
int main()
{
	char arr[8]={'r','u','c','h','i','t','h','a'};
	printf("Original array is:\n");
	print(arr,8);
	char new_arr[8];
	copy(arr,8,new_arr);
	printf("\nCopied array is:");
	print(new_arr,8);
}
void copy(char *arr,int size, char *new_arr)
{
	int i;
	for(i=0;i<size;i++)
	{
		*new_arr=*arr;
		new_arr++;
		arr++;
	}
}
void print(char *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%c",arr[i]);
	}
}

