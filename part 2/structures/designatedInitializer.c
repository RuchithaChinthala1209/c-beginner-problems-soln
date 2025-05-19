/* Array of book structure with different data for each book
using designated initializers */
#include<stdio.h>
struct Books {
	char title[40];
	char author[40];
	float price;
};
int main()
{
	struct Books b1={.title="Hello world",.author="Ruchitha",.price=199.99};
	printf("Information of the book:\n");
	printf("Title: %s\n",b1.title);
	printf("Author: %s\n",b1.author);
	printf("Price: %.2f/-\n",b1.price);
}
