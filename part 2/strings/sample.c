#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	printf("Enter your name:");
	//scanf("%s",name);
//	printf("\nGood Morning %s",name);
//	gets(name);//not safe for production code better use fgets
	//puts("Good morning");
//	puts(name);
	fgets(name,sizeof(name),stdin);
	printf("Good morning ");
	puts(name);
	int size=strlen(name);
	printf("Length of your name is %d",size);
}
