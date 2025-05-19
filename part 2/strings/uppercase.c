//convert input string into uppercases
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char text[100];
	printf("Enter your text:\n\n");
	fgets(text,sizeof(text),stdin);
	int i;
	printf("Data you entered is :");
	puts(text);
	for(i=0;i<strlen(text);i++)
	{
		text[i]=toupper(text[i]);
	}
	printf("Data that is updated to uppercases is:\n");
	puts(text);
}
