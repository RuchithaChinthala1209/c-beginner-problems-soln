/* Read a line of strings from user using fgets
and print it using puts*/
#include<stdio.h>
#include<string.h>
int main()
{
	int name[50];
	printf("Enter your name:");
	fgets(name,sizeof(name),stdin);
	printf("Hello ");
	puts(name);
}
