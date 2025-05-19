//check password using do while
#include<stdio.h>
#include<string.h>
int main()
{
	char password[50];
	const char PASS[50]="ruchitha";
	//printf("Enter password:");
//	fgets(password,strlen(password),stdin);
	do
	{
		printf("\nPlease enter correct password:");
		scanf("%s",password);
	}
	while(strcmp(password,PASS)!=0);
	printf("\nAccess granted!!");
}
