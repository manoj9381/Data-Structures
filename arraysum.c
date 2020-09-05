#include<stdio.h>
int main()
{
	int a[10],n,i,res;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		res=rarray_sum(a,n);
		printf("sum=%d",res);
		
}
int rarray_sum(int a[],int n)
{
	if(n==1)
	return a[1];
	else
	return a[n]+rarray_sum(a,n-1);
}
