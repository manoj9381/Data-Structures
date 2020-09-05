#include<stdio.h>
int main()
{
	int n,r,res;
	printf("enter n and r");
	scanf("%d%d",&n,&r);
	printf("ncr=%d",binomial_coeff(n,r));
	
}
int binomial_coeff(int n,int r)
{
	if((r==0)||(r==n))
	return 1;
	else
	return binomial_coeff(n-1, r)+binomial_coeff(n-1,r-1);
}

