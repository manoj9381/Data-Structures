#include<stdio.h>
int b_search(int a[],int low,int high,int x);
int main()
{
	int a[10],n,res,x,i;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter search element");
	scanf("%d",&x);
	res=b_search(a,0,n-1,x);
	if(res==-1)
	printf("not found");
	else
	printf("found at %d pos ",res);
}
int b_search(int a[],int low,int high,int x)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==x)
		return mid;
		else if(x<a[mid])
		high=mid-1;
		else
		low=mid+1;
		
	}
	return -1;
}
