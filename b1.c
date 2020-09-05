#include<stdio.h>
void d(int n)
{
	int r;
	while(n!=0)
	{
		r=n%2;
		d(n/2);
		printf("%d",r);
	}
}
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	d(n);
}
