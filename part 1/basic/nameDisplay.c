/* create a program to input name and display
hello name its nice to meet u*/
#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Hello %s it's nice to meet u!",name);
}
