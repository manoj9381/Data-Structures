#include<stdio.h>
int main()
{
	int m,n,res;
	printf("enter m and n");
	scanf("%d%d",&m,&n);
	res=a(m,n);
	printf("%d",res);
}
int a (int m,int n)
{
	if(m==0)
	return n+1;
	else if(n==0)
	return a(m-1,1);
	else
	return a(m-1,a(m-1,n));
}
