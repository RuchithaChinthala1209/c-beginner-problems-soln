/* Initialise a unsigned int to its max possible value
and also int at last add 1 to both and display the wrapped
result */
#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned int positive=UINT_MAX;
	int number=INT_MAX;
	printf("%u is the max value of unsigned integer\n",positive);
	printf("%d is the max value of intgere\n",number);
	positive++;
	number++;
	printf("%u is the max value of unsigned integer after increment\n",positive);
	printf("%d is the max value of intgere after increment\n",number);
	
}
