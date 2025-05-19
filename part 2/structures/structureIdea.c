/* create a program where you need to process and store data for a
book with attributes like author, title, price by a structure */
#include<stdio.h>
#include<string.h>
struct Data{
	char title[50];
	char author[50];
	float price;
};
int main()
{
	struct Data d;
	printf("Welcome to store your book data\n");
	printf("\nEnter the title of your book:");
	//scanf("%s",&d.title);
	fgets(d.title,sizeof(d.title),stdin);
	printf("\nEnter the author of the book:");
	//scanf("%s",&d.author);
	fgets(d.author,sizeof(d.author),stdin);
	printf("\nEnter the price of the book:");
	scanf("%f",&d.price);
	printf("\nHere is the information of the book you stored:");
	printf("\nTitle: %s",d.title);
	printf("\nAuthor: %s",d.author);
	printf("\nPrice: %f/-",d.price);
}
