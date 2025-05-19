/* write a function that accepts pointer to a student structure
with fields for id, name, year, gpa */
#include<stdio.h>
struct info{
	int id;
	char name[40];
	int year;
	float gpa;
};
void print_details(struct info *I,int n);
int main()
{
	int n,i;
	printf("Enter no of students details you want to enter:");
	scanf("%d",&n);
	struct info s[n];
	struct info *ptr=s;
	for(i=0;i<n;i++)
	{
		printf("\nEnter name:");
		scanf("%s",&s[i].name);
		printf("\nEnter id:");
		scanf("%d",&s[i].id);
		printf("\nEnter year:");
		scanf("%d",&s[i].year);
		printf("\nEnter gpa:");
		scanf("%f",&s[i].gpa);
	}
	printf("\nDetails you entered are:\n");
	print_details(ptr,n);
	
}
void print_details(struct info *I,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("Name:%s",I[i].name);
	printf("\nId:%d",I[i].id);
	printf("\nYear:%d",I[i].year);
	printf("\nGPA:%.2f",I[i].gpa);
	}
}

