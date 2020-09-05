#include<stdio.h>
int main()
{
	int m,n,res;
	printf("enter m and n");
	scanf("%d%d",&m,&n);
	res=r_add(m,n);
	printf("addition of %d and %d is %d",m,n,res);
}
int r_add(int m,int n)
{
	if(n==0)
	return m;
	else
	return 1+r_add(m,n-1);
}
