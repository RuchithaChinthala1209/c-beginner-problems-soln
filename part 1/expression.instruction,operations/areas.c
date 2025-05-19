
#include<stdio.h>
int main()
{
	//Area of triangle
	/*float base,height;
	printf("Enter base anf height of triangle:");
	scanf("%f%f",&base,&height);
	printf("\nArea of triangle is %f",0.5*base*height);*/
	//simple intrest (p*t*r)/100
	float p;
	float time;
	float r;
	printf("Enter principal amount:");
	scanf("%f",&p);
	printf("\nEnter time:");
	scanf("%f",&time);
	printf("\nEnter rate of intrest:");
	scanf("%f",&r);
	printf("\nSimple intrest is %f",(p*time*r)/100);
	//compound intrest p*(1+r/100)*t
	printf("\nCompound intrest is %f",p*(1+r/100)*time);
}
