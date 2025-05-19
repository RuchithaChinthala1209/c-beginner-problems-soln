/* pass a car structure to a function that prints the description
of the car */
#include<stdio.h>
struct Car
{
	char name[40];
	char model[40];
	int year;
	char colour[20];
};
void print_details(struct Car ca);
int main()
{
	struct Car c;
	printf("Enter the name of the car:");
	scanf("%s",&c.name);
	printf("\nEnter the mode of the car:");
	scanf("%s",&c.model);
	printf("\nEnter the year it was made:");
	scanf("%d",&c.year);
	printf("\nEnter the colour of the car;");
	scanf("%s",c.colour);
	print_details(c);
}
void print_details(struct Car ca) 
{
	printf("Name: %s",ca.name);
	printf("\nModel: %s",ca.model);
	printf("\nManufacturing year: %d",ca.year);
	printf("\nColour: %s",ca.colour);
}
