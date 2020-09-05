#include<stdio.h>
int main()
{
	int a[10],n,i,res;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		res=rarray_sum(a,0,n-1);
		printf("sum=%d",res);
		
}
int rarray_sum(int a[],int high,int low)
{ 
   int mid,s1,s2;
	if(low<high)
	{
		mid=(low+high)/2;
		s1=rarray_sum(a,low,mid);
		s2=rarray_sum(a,mid+1,high);
		return s1+s2;
	}
	else
	return a[low];
}
