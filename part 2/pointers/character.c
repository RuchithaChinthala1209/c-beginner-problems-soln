// read a character and print the character
#include<stdio.h>
int main()
{
	char a;
	char *ptr=&a;
	printf("Enter a character:");
	scanf("%c",&a);
	printf("\nYou entered character %c",a);
	printf("\nYou entered character %c",*ptr);

}
