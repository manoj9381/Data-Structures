#include<stdio.h>
int main()
{
	int m,n;
	printf("enter m and n");
	scanf("%d%d",&m,&n);
	printf("gcd=%d",gcd(m,n));
	
}
void gcd(int m,int n)
{
	if(n==0)
	return m;
	else
	return gcd(n,m%n);
}
