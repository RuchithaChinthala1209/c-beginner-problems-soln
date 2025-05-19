//Reverse a string
#include<stdio.h>
#include<string.h>
void reverse(char text[],char reverse[]);
int main()
{
	char text[50],reversed[50];
	int i;
	printf("Enter your text:\n");
	fgets(text,sizeof(text),stdin);
	printf("Original text before reversing:");
	puts(text);
	text[strcspn(text, "\n")] = '\0';
	printf("Text after reversing: ");
	reverse(text,reversed);

	if(strcmp(reversed,text)==0)
	{
		printf("\nIt is a palindrome");
	}
	else
	{
		printf("\nIt is not a palindrome");
	}
}
void reverse(char text[],char reversed[])
{
	int len=strlen(text);
	char temp;
	int i;
	for(i=0;i<len;i++)
	{
		reversed[i]=text[len-1-i];
	}
	puts(reversed);
}
