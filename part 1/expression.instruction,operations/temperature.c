//convert fahrenheit into celcius
#include<stdio.h>
int main()
{
	float temp;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&temp);
	float cel=(temp-32)*5/9;
	printf("\nCelsius temperature is %f",cel);
}
