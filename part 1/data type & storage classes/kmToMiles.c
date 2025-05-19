//change long km into miles
#include<stdio.h>
int main()
{
	const float MILE_PER_KM=0.621371;
	long kms;
	printf("Enter the kms:")	;
	scanf("%ld",&kms);
	printf("\nNo of miles is %ld",kms*MILE_PER_KM);
}
