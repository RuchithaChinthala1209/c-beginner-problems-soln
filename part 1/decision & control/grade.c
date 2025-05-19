//calculate grades
#include<stdio.h>
int main()
{
	int T,H,E,M,SI,S,total;
	float per;
	printf("\nEnter your telugu marks:");
	scanf("%d",&T);
	printf("\nEnter your Hindi marks:");
	scanf("%d",&H);
	printf("\nEnter your English marks:");
	scanf("%d",&E);
	printf("\nEnter your Maths marks:");
	scanf("%d",&M);
	printf("\nEnter your Science marks:");
	scanf("%d",&SI);
	printf("\nEnter your Social marks:");
	scanf("%d",&S);
	total=T+H+E+M+SI+S;
	printf("\nTotal marks are: %d/600",total);
	per=(total/600.0)*100;
	printf("\nPercentage is %f",per);
	if(per>90)
	{
		printf("A+ grade");
	}
	else if(per>=80 && per<90)
	{
		printf("A grade");
	}
	else if(per>=70 && per<80)
	{
		printf("B grade");
	}
	else if(per>=60 && per<70)
	{
		printf("C grade");
	}
	else if(per>=50 && per<60)
	{
		printf("D grade");
	}
	else if(per>=40 && per<50)
	{
		printf("E grade");
	}
	else
	{
		printf("You are Fail with F grade");
	}
}
