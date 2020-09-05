#include<stdio.h>
struct size
{
	char a;
	int b;
	float c;
	long double d;
	int e;
}s;
int main()
{
	printf("size is %d \n",sizeof(s));
	printf("address of a is %u\n",&s.a);
	printf("address of b is %u\n",&s.b);
	printf("address of c is %u\n",&s.c);
	printf("address of d is %u\n",&s.d);
	printf("address of e is %u\n",&s.e);
}
