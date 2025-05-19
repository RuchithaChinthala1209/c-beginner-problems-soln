#include<stdio.h>
int main()
{
	int i;
	float f;
	char c;
	double d;
	printf("Size of int is %d\n",sizeof(i));
	printf("size of float is %lu\n",sizeof(f));//arguments return unsigned long i.e we use lu
	printf("size of char is %lu\n",sizeof(c));
	printf("size of double is %dl\n",sizeof(d));
}
