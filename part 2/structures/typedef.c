// Implementation of typedef
#include<stdio.h>
typedef struct student{
	char name[30];
	int age;
}std;
int main()
{
	std s1={"Ruchitha",20};
	std s2={"Charan",16};
	printf("%s is of age %d",s1.name,s1.age);
	printf("\n%s is of age %d",s2.name,s2.age);
}
