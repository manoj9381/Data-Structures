#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	binary(n);
	
}
void binary(int n)
{
	int r;
	if(n!=0)
	{
		r=n%2;
		binary(n/2);
		printf("%d",r);
	}
}
