// take strings from user until they enter exit
#include<stdio.h>
#include<string.h>
int main()
{
	const char EXIT[]="exit";
	char data[100];
	printf("Welcome\nYou can give endless string if you want to stop type exit\n");
	do
	{
		fgets(data,sizeof(data),stdin);
		data[strcspn(data, "\n")] = '\0';
		if(strcmp(EXIT,data)==0) break;
	}
	while(1);
}
