#include<stdio.h>
int main()
{
	int m,n,res;
	printf("enter m and n");
	scanf("%d%d",&m,&n);
	res=r_mult(m,n);
	printf("multiplication of %d and %d is %d",m,n,res);
}
int r_mult(int m,int n)
{
	if(n==1)
	return m;
	else
	return m+r_mult(m,n-1);
}
