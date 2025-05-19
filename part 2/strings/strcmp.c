/* create a scurity check system that checks user password with
fixed password using strcmp */
#include<stdio.h>
#include<string.h>
int main()
{
	const char FIXED_PASSWORD[]="ruchitha";
	char password[50];
	printf("Enter your password:\n");
	scanf("%s",password);
	//fgets(password,sizeof(password),stdin);
	if(strcmp(password,FIXED_PASSWORD)==0)
	{
		printf("Access granted\n");
	}
	else
	{
		printf("Access denined\n");
	}
}
