#include<stdio.h>
int main()
{
	int a[10],n,i,res;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
		res=rarray_sum2(a,n-1);
		printf("sum=%d",res);
		
}
int rarray_sum2(int a[],int n)
{
	if(n==0)
	return a[0];
	else
	return a[n]+rarray_sum2(a,n-1);
}
