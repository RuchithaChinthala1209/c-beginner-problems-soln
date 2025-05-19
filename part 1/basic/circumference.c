/*calculate circumference  by keeping pi as contanst*/
#include<stdio.h>
int main()
{
	/*float radius;
	float pi=3.14;
	printf("Enter radius of a circle :");
	scanf("%f",&radius);
	printf("Circumference of circle is %f",2*radius*pi);*/
	float radius;
	const float pi=3.14;
	printf("Enter radius:");
	scanf("%f",&radius);
	printf("Circumference of circle is %f",2*radius*pi);
}
