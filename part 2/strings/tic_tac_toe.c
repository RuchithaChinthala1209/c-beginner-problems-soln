// use a 2d array to store and display tic tac toe
#include<stdio.h>
int main()
{
	char tic[3][3]={{'x','O','X'},{'O','X','O'},{'O','X','X'}};
	int i, j;
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%c",tic[i][j]);
			if(j<2) printf("|");

		}
		if(i<2) printf("\n-----");
	}
//	printf("Welcome to tic tac toe game board:\n\n");
//	printf("%c|%c|%c",tic[0][0],tic[0][1],tic[0][2]);
//	printf("\n------");
//	printf("\n%c|%c|%c",tic[1][0],tic[1][1],tic[1][2]);
//	printf("\n------");
//	printf("\n%c|%c|%c",tic[2][0],tic[2][1],tic[2][2]);
}
