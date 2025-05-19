//Reverse a string
#include<stdio.h>
#include<string.h>
void reverse(char text[]);
int main()
{
	char text[50];
	int i;
	printf("Enter your text:\n");
	fgets(text,sizeof(text),stdin);
	printf("Original text before reversing:");
	puts(text);
	printf("Text after reversing: ");
	reverse(text);
}
void reverse(char text[])
{
	int len=strlen(text);
	char temp;
	int i;
	for(i=0;i<len/2;i++)
	{
		temp=text[i];
		text[i]=text[len-1-i];
		text[len-i-1]=temp;
	}
	puts(text);
}
